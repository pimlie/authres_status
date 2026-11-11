<?php
namespace AuthresStatusTests;

use authres_status;
use PHPUnit\Framework\TestCase;
use stdClass;

/**
 * The author check reads the From address in every form RFC 5322 allows,
 * and it does not report a pass when there is no author domain to compare.
 */
class FromHeaderFormsTest extends TestCase
{
    // A valid signature, but by a domain other than the author's
    private const OTHER_DOMAIN = 'mx.example.net; dkim=pass header.d=other.example; spf=pass smtp.mailfrom=other.example';
    // A valid signature by the author's domain
    private const AUTHOR_DOMAIN = 'mx.example.net; dkim=pass header.d=bank.example; spf=pass smtp.mailfrom=bank.example';

    /**
     * Status shown for a message, read from the icon's alt text
     */
    private function shown_status($from, $authres)
    {
        $headers = new stdClass();
        $headers->from = $from;
        $headers->others = ['x-dkim-authentication-results' => false, 'authentication-results' => $authres];

        $html = (new authres_status())->get_authentication_status($headers);

        return preg_match('/alt="([^"]*)"/', $html, $m) ? $m[1] : '';
    }

    public static function provide_from_forms(): iterable
    {
        return [
            'name and angle brackets' => ['Chief <ceo@bank.example>'],
            'angle brackets only' => ['<ceo@bank.example>'],
            'bare address' => ['ceo@bank.example'],
            'bare address with spaces' => ['  ceo@bank.example  '],
            'bare address with comment' => ['ceo@bank.example (Chief)'],
            'quoted name with a comma' => ['"Chief, Bank" <ceo@bank.example>'],
        ];
    }

    /**
     * A signature by another domain is a third-party signature, whatever the form of the From header
     *
     * @dataProvider provide_from_forms
     */
    public function test_other_domain_is_third_party($from)
    {
        $this->assertSame('thirdparty', $this->shown_status($from, self::OTHER_DOMAIN));
    }

    /**
     * The author's own signature still counts as a pass
     *
     * @dataProvider provide_from_forms
     */
    public function test_author_domain_passes($from)
    {
        $this->assertSame('signaturepass', $this->shown_status($from, self::AUTHOR_DOMAIN));
    }

    /**
     * The address decides, not a display name that looks like one, also when the name is MIME encoded
     */
    public function test_display_name_does_not_decide()
    {
        $this->assertSame('thirdparty', $this->shown_status('"other@other.example" <ceo@bank.example>', self::OTHER_DOMAIN));
        $this->assertSame('signaturepass', $this->shown_status('"ceo@bank.example" <ceo@other.example>', self::OTHER_DOMAIN));
        $this->assertSame('signaturepass', $this->shown_status('=?UTF-8?Q?ceo=40bank.example?= <ceo@other.example>', self::OTHER_DOMAIN));
    }

    /**
     * With several authors the first address decides, as before
     */
    public function test_first_of_several_addresses_decides()
    {
        $this->assertSame('thirdparty', $this->shown_status('ceo@bank.example, ceo@other.example', self::OTHER_DOMAIN));
    }

    /**
     * Without an author domain there is nothing to compare, so no pass is shown
     */
    public function test_no_author_domain_is_no_pass()
    {
        $this->assertSame('thirdparty', $this->shown_status('', self::OTHER_DOMAIN));
        $this->assertSame('thirdparty', $this->shown_status('undisclosed-recipients:;', self::OTHER_DOMAIN));
        $this->assertSame('thirdparty', $this->shown_status('ceo', self::OTHER_DOMAIN));
    }

    /**
     * A failed DMARC result is not shown as a pass
     */
    public function test_dmarc_fail_is_no_pass()
    {
        $this->assertNotSame('signaturepass', $this->shown_status('ceo@bank.example', self::OTHER_DOMAIN . '; dmarc=fail header.from=bank.example'));
    }
}
