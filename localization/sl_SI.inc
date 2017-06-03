<?php

$labels = array();
$labels['nosignature'] = 'Ni podatkov za podpis';
$labels['noauthresults'] = 'Signature found but no auth. results header. Server configuration problem?';
$labels['signaturepass'] = 'Valid signature(s) from the sender\'s domain. verified by ';
$labels['partialpass'] = 'Some signatures are invalid but at least one is valid for the sender\'s domain. verified by ';
$labels['thirdparty'] = 'Signed by third party, signature is present but for different domain than from address. verified for ';
$labels['temporaryinvalid'] = 'Signature is (temporarily) not valid! verified by ';
$labels['invalidsignature'] = 'Podpis ni veljaven. Preverjeno iz strani';

$labels['for'] = 'za';
$labels['by'] = 'od';

$labels['section_title']  = 'Status avtentikacije';
$labels['column_title']  = 'Rezultat avtentikacije';

$labels['title_enable_column']  = 'Omogoči stolpec';
$labels['label_enable_column']  = 'Enable authentication result column in message list';
$labels['label_fallback_verifier'] = 'Use internal DKIM verifier (if signature found but no auth. results header)';

$labels['title_trusted_mtas'] = 'Trusted mta\'s';
$labels['label_trusted_mtas'] = 'Comma separated authserv-id list of mta\'s you trust. Only results from these mta\'s will be shown';

$labels['title_include_status'] = 'Prikaži samo naslednje statuse';
$labels['label_include_status1']  = 'Podpisa ni bilo moogoče najti';
$labels['label_include_status2']  = 'Signature found but no auth. results header';
$labels['label_include_status4']  = 'Vsi podpisi so bili preverjeni';
$labels['label_include_status8']  = 'Vsaj en podpis je bil uspešno preverjen';
$labels['label_include_status16']  = 'Third party signature';
$labels['label_include_status32']  = 'Podpisovanje je začasno spodletelo';
$labels['label_include_status64']  = 'Podpisovanje je spodletelo';

?>
