<?php

$labels = array();
$labels['nosignature'] = 'Brak informacji o podpisie';
$labels['noauthresults'] = 'Znaleziono podpis, jednak bez autoryzacji. Możliwe, że problem z konfiguracją serwera?';
$labels['signaturepass'] = 'Valid signature(s) from the sender\'s domain. verified by ';
$labels['partialpass'] = 'Some signatures are invalid but at least one is valid for the sender\'s domain. verified by ';
$labels['thirdparty'] = 'Signed by third party, signature is present but for different domain than from address. verified for ';
$labels['temporaryinvalid'] = 'Podpis jest (tymczasowo) niepoprawny! sprawdzone przez';
$labels['invalidsignature'] = 'Podpis jest niepoprawny! sprawdzone przez';

$labels['for'] = 'dla';
$labels['by'] = 'przez';

$labels['section_title']  = 'Status autoryzacji';
$labels['column_title']  = 'Autoryzacja. Wynik';

$labels['title_enable_column']  = 'Enable Column';
$labels['label_enable_column']  = 'Enable authentication result column in message list';
$labels['label_fallback_verifier'] = 'Use internal DKIM verifier (if signature found but no auth. results header)';

$labels['title_include_status'] = 'Pokaż tylko następujące statusy';
$labels['label_include_status1']  = 'Nie znaleziono podpisu';
$labels['label_include_status2']  = 'Znaleziono podpis, jednak bez autoryzacji.';
$labels['label_include_status4']  = 'Wszystkie podpisy przeszły sprawdzenie';
$labels['label_include_status8']  = 'Co najmniej jeden podpis przeszedł sprawdzenie';
$labels['label_include_status16']  = 'Podpis osoby trzeciej';
$labels['label_include_status32']  = 'Signature temporary failed';
$labels['label_include_status64']  = 'Signature permanently failed';

?>
