<?php

$labels = array();
$labels['nosignature'] = 'İmza bilgisi yok';
$labels['noauthresults'] = 'İmza bulundu fakat doğrulama sonucu başlığı yok. Sunucu yapılandırma problemi olabilir mi?';
$labels['signaturepass'] = 'Gönderici alan adından gelen imza(lar) geçerli.  Doğrulama yapan';
$labels['partialpass'] = 'Bazı imzalar geçersiz fakat enaz bir tanesi bu gönderici alan adı için geçerli. Doğrulama yapan';
$labels['thirdparty'] = '3. parti tarafından imzalanmış. İmza var fakat gönderici adresinden farklı bir alan adı için var. Şunun için doğrulandı:';
$labels['temporaryinvalid'] = 'İmza (geçici olarak) geçerli değil. Doğrulayan:';
$labels['invalidsignature'] = 'İmza geçerli değil. Doğrulayan:';

$labels['for'] = 'için';
$labels['by'] = 'tarafından';

$labels['section_title']  = 'Doğrulama Durumu';
$labels['column_title']  = 'Doğrulama Sonucu';

$labels['title_enable_column']  = 'Sütunu Etkinleştir';
$labels['label_enable_column']  = 'Mesaj listesinde doğrulama sonucu sütununu etkinleştir';
$labels['label_fallback_verifier'] = 'Dahili DKIM doğrulayıcısını kullan (İmza bulundu fakat doğrulama sonucu başlığı yok ise)';

$labels['title_include_status'] = 'Sadece aşağıdaki durumları göster';
$labels['label_include_status1']  = 'İmza bulunamadı';
$labels['label_include_status2']  = 'İmza bulundu fakat doğrulama sonucu başlığı yok';
$labels['label_include_status4']  = 'Tüm imzalar doğrulamayı geçti';
$labels['label_include_status8']  = 'En az bir imza doğrulamayı geçti';
$labels['label_include_status16']  = 'Üçüncü parti imza';
$labels['label_include_status32']  = 'İmza geçici olarak başarısız';
$labels['label_include_status64']  = 'İmza kalıcı olarak başarısız oldu';

?>
