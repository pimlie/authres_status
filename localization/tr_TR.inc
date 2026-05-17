<?php

$labels = array();
$labels['nosignature'] = 'Herhangi bir imza bilgisi yok';
$labels['noauthresults'] = 'İmza bulundu fakat kimlik doğrulama sonucu üst bilgisi yok. Sunucu yapılandırma sorunu olabilir mi?';
$labels['signaturepass'] = 'Gönderici etki alanından gelen imza(lar) geçerli. Doğrulayan:';
$labels['partialpass'] = 'Bazı imzalar geçersiz fakat en az bir tanesi bu gönderici etki alanı için geçerli. Doğrulayan:';
$labels['thirdparty'] = '3. taraf imzalamış. İmza var ancak gönderici adresinden farklı bir etki alanı için. Şunun için doğrulandı:';
$labels['temporaryinvalid'] = 'İmza (geçici olarak) geçerli değil. Doğrulayan:';
$labels['invalidsignature'] = 'İmza geçersiz. Doğrulayan:';

$labels['for'] = 'şunun için';
$labels['by'] = 'tarafından';

$labels['section_title']  = 'Kimlik doğrulama durumu';
$labels['column_title']  = 'Kimlik doğrulama sonucu';

$labels['title_enable_column']  = 'Sütun kullanılsın';
$labels['label_enable_column']  = 'İleti listesinde doğrulama sonucu sütunu kullanılsın';
$labels['label_fallback_verifier'] = 'İç DKIM doğrulayıcısı kullanılsın (imza bulunmuş ancak doğrulama sonucu üst bilgisi yoksa';

$labels['title_trusted_mtas'] = 'Güvenilen MTA kodları';
$labels['label_trusted_mtas'] = 'Güvendiğiniz MTA kimlik doğrulama hizmeti kimliklerinin listesini virgül ile ayırarak yazın. Yalnızca bu MTA kodlarının sonuçları görüntülenir';

$labels['title_include_status'] = 'Yalnızca aşağıdaki durumlar görüntülensin';
$labels['label_include_status1']  = 'Herhangi bir imza bulunamadı';
$labels['label_include_status2']  = 'İmza bulundu ancak doğrulama sonucu üst bilgisi yok';
$labels['label_include_status4']  = 'Tüm imzalar doğrulandı';
$labels['label_include_status8']  = 'En az bir imza doğrulandı';
$labels['label_include_status16']  = 'Üçüncü taraf imzası';
$labels['label_include_status32']  = 'İmza geçici olarak başarısız oldu';
$labels['label_include_status64']  = 'İmza kalıcı olarak başarısız oldu';

?>
