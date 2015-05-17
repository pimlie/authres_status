<?php

$labels = array();
$labels['nosignature'] = 'Nessuna firma diponibile';
$labels['noauthresults'] = 'Alcune firme sono state trovate, ma nessu auth. header. C\'è un problema di configurazione?';
$labels['signaturepass'] = 'Firme valide dal dominio del mittente. Verificate da';
$labels['partialpass'] = 'Alcune firme non sono valide, ma almeno una risulta valida per il dominio del mittente. Verificato da';
$labels['thirdparty'] = 'Firmato da terzi, la firma è presente ma per il dominio diverso da quello dell\'indirizzo. verificate per';
$labels['temporaryinvalid'] = 'La firma non è valida (temporaneamente)! verificato da';
$labels['invalidsignature'] = 'La firma non è valida! verificato da';

$labels['for'] = 'per';
$labels['by'] = 'da';

$labels['section_title']  = 'Stato autenticazione';
$labels['column_title']  = 'Auth. Risult';

$labels['title_enable_column']  = 'Abilita colonna';
$labels['label_enable_column']  = 'Abilitare la colonna risultato autenticazione nell\'elenco dei messaggi';
$labels['label_fallback_verifier'] = 'Usa verifica interna DKIM (se la firma è stata trovata ma non presenta intestazione di auth. result)';

$labels['title_include_status'] = 'Mostra soltanto i seguenti stati';
$labels['label_include_status1']  = 'Nessuna firma trovata';
$labels['label_include_status2']  = 'Firma trovata ma non presenta alcuna intestazione di \'auth. result\'';
$labels['label_include_status4']  = 'Tutte le firme hanno superato la convalidazione';
$labels['label_include_status8']  = 'Almeno una firma ha superato la convalida';
$labels['label_include_status16']  = 'Firma da terzi';
$labels['label_include_status32']  = 'Firma temporaneamente fallita';
$labels['label_include_status64']  = 'Firma fallita in modo permanente';

?>
