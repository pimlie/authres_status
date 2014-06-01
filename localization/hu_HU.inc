<?php

$labels = array();
$labels['nosignature'] = 'No signature information';
$labels['noauthresults'] = 'Signature found but no auth. results header. Server configuration problem?';
$labels['signaturepass'] = 'Valid signature(s) from the sender\'s domain. verified by ';
$labels['partialpass'] = 'Some signatures are invalid but at least one is valid for the sender\'s domain. verified by ';
$labels['thirdparty'] = 'Signed by third party, signature is present but for different domain than from address. verified for ';
$labels['temporaryinvalid'] = 'Signature is (temporarily) not valid! verified by ';
$labels['invalidsignature'] = 'Signature is not valid! verified by ';

$labels['for'] = 'számára';
$labels['by'] = 'általa';

$labels['section_title']  = 'Hitelesítési Állapot';
$labels['column_title']  = 'Auth. Result';

$labels['title_enable_column']  = 'Enable Column';
$labels['label_enable_column']  = 'Enable authentication result column in message list';

$labels['title_include_status'] = 'Only show the following statuses';
$labels['label_include_status1']  = 'Nem található aláírás';
$labels['label_include_status2']  = 'Signature found but no auth. results header';
$labels['label_include_status4']  = 'Az összes aláírás megfelelt az ellenörzésen';
$labels['label_include_status8']  = 'Legalább egy aláírás megfelelt az ellenörzésen';
$labels['label_include_status16']  = 'Külsö aláírás';
$labels['label_include_status32']  = 'Signature temporary failed';
$labels['label_include_status64']  = 'Signature permanently failed';

?>
