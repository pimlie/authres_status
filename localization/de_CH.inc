<?php

$labels = array();
$labels['nosignature'] = 'Keine Informationen zur Sigantur';
$labels['noauthresults'] = 'Signature found but no auth. results header. Server configuration problem?';
$labels['signaturepass'] = 'Valid signature(s) from the sender\'s domain. verified by ';
$labels['partialpass'] = 'Some signatures are invalid but at least one is valid for the sender\'s domain. verified by ';
$labels['thirdparty'] = 'Signed by third party, signature is present but for different domain than from address. verified for ';
$labels['temporaryinvalid'] = 'Signature is (temporarily) not valid! verified by ';
$labels['invalidsignature'] = 'Ungültige Signatur! Verifiziert durch';

$labels['for'] = 'für';
$labels['by'] = 'von';

$labels['section_title']  = 'Authenifizierungsstatus';
$labels['column_title']  = 'Auth. Resultat';

$labels['title_enable_column']  = 'Enable Column';
$labels['label_enable_column']  = 'Enable authentication result column in message list';
$labels['label_fallback_verifier'] = 'Use internal DKIM verifier (if signature found but no auth. results header)';

$labels['title_include_status'] = 'Only show the following statuses';
$labels['label_include_status1']  = 'Keine Signatur gefunden';
$labels['label_include_status2']  = 'Signature found but no auth. results header';
$labels['label_include_status4']  = 'All signatures passed validation';
$labels['label_include_status8']  = 'At least one signature passed validation';
$labels['label_include_status16']  = 'Third party Signatur';
$labels['label_include_status32']  = 'Signature temporary failed';
$labels['label_include_status64']  = 'Signature permanently failed';

?>
