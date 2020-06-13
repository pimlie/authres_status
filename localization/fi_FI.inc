<?php

$labels = array();
$labels['nosignature'] = 'Ei allekirjoitustietoja';
$labels['noauthresults'] = 'Allekirjoitus löytyi, mutta tunnistautumistieto-otsaketta ei. Mahdollinen ongelma palvelimen asetuksissa.';
$labels['signaturepass'] = 'Kelvolliset allekirjoitukset lähettäjän verkkotunnuksesta. Varmentaja';
$labels['partialpass'] = 'Osa allekirjoituksista eivät ole kelvollisia, mutta ainakin yksi kelpaa lähettäjän verkkotunnukseen. Varmentajana ';
$labels['thirdparty'] = 'Kolmannen osapuolen allekirjoittama. Allekirjoitus löytyy, mutta se poikkeaa lähettäjän osoitteesta. Varmennettu osoitteelle';
$labels['temporaryinvalid'] = 'Allekirjoitus ei ole (väliaikaisesti) pätevä! varmentaja';
$labels['invalidsignature'] = 'Allekirjoitus ei ole kelvollinen! vahvistanut';

$labels['for'] = 'for';
$labels['by'] = 'by';

$labels['section_title']  = 'Tunnistautumisen tila';
$labels['column_title']  = 'Tunnistautumisen tulos';

$labels['title_enable_column']  = 'Näytä sarake';
$labels['label_enable_column']  = 'Näytä tunnistautumisen tulokset -sarake viestilistauksessa.';
$labels['label_fallback_verifier'] = 'Use internal DKIM verifier (if signature found but no auth. results header)';

$labels['title_trusted_mtas'] = 'Luotetut mta:t';
$labels['label_trusted_mtas'] = 'Pilkulla erotettu authserv-id -lista luotetuista mta:sta. Vain tulokset näistä mta:sta näytetään';

$labels['title_include_status'] = 'Näytä vain seuraavat tilat';
$labels['label_include_status1']  = 'Allekirjoitusta ei löytynyt';
$labels['label_include_status2']  = 'Allekirjoitus löytyi, mutta tunnistautumistieto-otsaketta ei';
$labels['label_include_status4']  = 'Kaikki allekirjoitukset läpäisivät tarkistuksen';
$labels['label_include_status8']  = 'Ainakin yksi allekirjoitus läpäisi tarkistuksen';
$labels['label_include_status16']  = 'Kolmannen osapuolen allekirjoitus';
$labels['label_include_status32']  = 'Allekirjoitus epäonnistui väliaikaisesti';
$labels['label_include_status64']  = 'Allekirjoitus epäonnistui pysyvästi';

?>
