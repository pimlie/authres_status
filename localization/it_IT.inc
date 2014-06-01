<?php

$labels = array();
$labels['nosignature'] = 'Nessuna firma diponibile';
$labels['noauthresults'] = 'Alcune firme sono state trovate, ma nessu auth. header. C\'è un problema di configurazione?';
$labels['signaturepass'] = 'Firme valide dal dominio del mittente. Verificate da';
$labels['partialpass'] = 'Alcune firme non sono valide, ma almeno una risulta valida per il dominio del mittente. Verificato da';
$labels['thirdparty'] = 'Signed by third party, signature is present but for different domain than from address. verified for ';
$labels['temporaryinvalid'] = 'Signature is (temporarily) not valid! verified by ';
$labels['invalidsignature'] = 'Signature is not valid! verified by ';

$labels['for'] = 'for';
$labels['by'] = 'by';

$labels['section_title']  = 'Authenticaton Status';
$labels['column_title']  = 'Auth. Result';

$labels['title_enable_column']  = 'Enable Column';
$labels['label_enable_column']  = 'Enable authentication result column in message list';

$labels['title_include_status'] = 'Only show the following statuses';
$labels['label_include_status1']  = 'No signature found';
$labels['label_include_status2']  = 'Signature found but no auth. results header';
$labels['label_include_status4']  = 'All signatures passed validation';
$labels['label_include_status8']  = 'At least one signature passed validation';
$labels['label_include_status16']  = 'Third party signature';
$labels['label_include_status32']  = 'Signature temporary failed';
$labels['label_include_status64']  = 'Signature permanently failed';

?>
