<?php
namespace AuthresStatusTests;

use Closure;
use authres_status;
use PHPUnit\Framework\TestCase;

class TrustedMtasTest extends TestCase
{
    private function plugin(array $trusted_mtas)
    {
        $plugin = new authres_status();
        Closure::bind(function () use ($trusted_mtas) {
            $this->trusted_mtas = $trusted_mtas;
        }, $plugin, authres_status::class)();

        return $plugin;
    }

    private function methods(array $results)
    {
        return array_map(function ($r) {
            return $r['method'] . '=' . $r['result'];
        }, $results);
    }

    public function test_header_without_authserv_id_is_ignored_when_trusted_mtas_is_set()
    {
        $plugin = $this->plugin(['mx.example.com']);
        $results = $plugin->rfc5451_extract_authresheader('dkim=pass header.d=victim.com header.i=@victim.com');

        $this->assertSame([], $results);
    }

    public function test_header_whose_first_token_is_a_result_is_ignored_when_trusted_mtas_is_set()
    {
        $plugin = $this->plugin(['mx.example.com']);
        $results = $plugin->rfc5451_extract_authresheader('dkim=pass; spf=pass smtp.mailfrom=victim.com');

        $this->assertSame([], $results);
    }

    public function test_header_from_untrusted_authserv_id_is_ignored()
    {
        $plugin = $this->plugin(['mx.example.com']);
        $results = $plugin->rfc5451_extract_authresheader('evil.example.net; dkim=pass header.d=victim.com');

        $this->assertSame([], $results);
    }

    public function test_header_from_trusted_authserv_id_is_parsed()
    {
        $plugin = $this->plugin(['mx.example.com']);
        $results = $plugin->rfc5451_extract_authresheader('mx.example.com; dkim=pass header.d=example.org; spf=pass smtp.mailfrom=example.org');

        $this->assertSame(['dkim=pass', 'spf=pass'], $this->methods($results));
    }

    public function test_trusted_authserv_id_without_a_dot_is_still_accepted()
    {
        $plugin = $this->plugin(['mx']);
        $results = $plugin->rfc5451_extract_authresheader('mx; dkim=pass header.d=example.org');

        $this->assertSame(['dkim=pass'], $this->methods($results));
    }

    public function test_trusted_authserv_id_followed_by_a_version_is_accepted()
    {
        $plugin = $this->plugin(['mx.example.com']);
        $results = $plugin->rfc5451_extract_authresheader('mx.example.com 1; dkim=pass header.d=example.org');

        $this->assertSame(['dkim=pass'], $this->methods($results));
    }

    public function test_untrusted_authserv_id_followed_by_a_version_is_ignored()
    {
        $plugin = $this->plugin(['mx.example.com']);
        $results = $plugin->rfc5451_extract_authresheader('evil 1; dkim=pass header.d=victim.com');

        $this->assertSame([], $results);
    }

    public function test_without_trusted_mtas_a_header_without_authserv_id_is_still_parsed()
    {
        $plugin = $this->plugin([]);
        $results = $plugin->rfc5451_extract_authresheader('dkim=pass header.d=example.org');

        $this->assertSame(['dkim=pass'], $this->methods($results));
    }
}
