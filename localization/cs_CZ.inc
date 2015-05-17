<?php

$labels = array();
$labels['nosignature'] = 'Neobsahuje podpis DKIM.';
$labels['noauthresults'] = 'Obsahuje podpis DKIM, ale ne výsledek ověření. Špatné nastavení serveru?';
$labels['signaturepass'] = 'Platný  DKIM podpis domény odesílatele. ';
$labels['partialpass'] = 'Některé DKIM podpisy jsou neplatné, ale alespoň jeden je platný pro doménu odesílatele. ';
$labels['thirdparty'] = 'Podepsáno třetí stranou, obsahuje podpis ale pro jinou doménu než z adresy odesílatele. ';
$labels['temporaryinvalid'] = 'Podpis DKIM není (dočasně) platný! ';
$labels['invalidsignature'] = 'Podpis DKIM není platný! ';

$labels['for'] = 'pro';
$labels['by'] = 'od';

$labels['section_title']  = 'Ověření DKIM';
$labels['column_title']  = 'DKIM';

$labels['title_enable_column']  = 'Povolit sloupec';
$labels['label_enable_column']  = 'Povolit sloupec s výsledkem ověření DKIM v seznamu zpráv';
$labels['label_fallback_verifier'] = 'Použít vlastní ověření DKIM (když mail obsahuje podpis, ale ne výsledek ověření)';

$labels['title_include_status'] = 'Zobrazit pouze tyto stavy';
$labels['label_include_status1']  = 'Podpis nenalezen';
$labels['label_include_status2']  = 'Obsahuje podpis, ale ne výsledek ověření';
$labels['label_include_status4']  = 'Všechny podpisy úspěšně ověřeny';
$labels['label_include_status8']  = 'Alespoň jeden podpis úspěšně ověřen';
$labels['label_include_status16']  = 'Podpis třetí strany';
$labels['label_include_status32']  = 'Podpis dočasně selhal';
$labels['label_include_status64']  = 'Podpis trvale selhal';
