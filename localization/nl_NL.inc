<?php

$labels = array();
$labels['nosignature'] = 'Geen digitale handtekening';
$labels['noauthresults'] = 'Digitale handtekening gevonden maar geen auth. results header. Server configuratie probleem?';
$labels['signaturepass'] = 'Geldige digitale handtekening voor het domein van de afzender. Gecontroleerd door ';
$labels['partialpass'] = 'Sommige handtekenigen zijn ongeldig maar tenminste een is geldig voor het domein van de afzender. Gecontroleerd door ';
$labels['thirdparty'] = 'Ondertekend door een derde partij, er is een geldige digitale handtekening maar voor een ander domein dan van de afzender. Gecontroleerd voor ';
$labels['temporaryinvalid'] = 'Digitale handtekening is (tijdelijk) ongeldig! Gecontroleerd door ';
$labels['invalidsignature'] = 'Digitale handtekening is ongeldig! Gecontroleerd door ';

$labels['for'] = 'voor';
$labels['by'] = 'door';

$labels['section_title']  = 'Authenticatie Status';
$labels['column_title']  = 'Auth. Status';

$labels['title_enable_column']  = 'Activeer Kolom';
$labels['label_enable_column']  = 'Voeg authenticatie status kolom toe aan berichtenlijst';
$labels['label_fallback_verifier'] = 'Gebruik interne DKIM verifier (indien digitale handtekening gevonden maar geen auth. results header)';

$labels['title_include_status'] = 'Geef alleen de volgende statussen weer';
$labels['label_include_status1']  = 'Geen digitale handtekening gevonden';
$labels['label_include_status2']  = 'Digitale handtekening gevonden maar geen auth. results header';
$labels['label_include_status4']  = 'Alle digitale handtekeningen zijn geldig';
$labels['label_include_status8']  = 'Tenminste een digitale handtekening is geldig';
$labels['label_include_status16']  = 'Ondertekend bij derde partij';
$labels['label_include_status32']  = 'Digitale handtekening tijdelijk ongeldig';
$labels['label_include_status64']  = 'Digitale handtekening ongeldig';

?>
