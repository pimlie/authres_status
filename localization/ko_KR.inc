<?php

$labels = array();
$labels['nosignature'] = '서명 정보가 없음';
$labels['noauthresults'] = '서명을 찾았으나 인증 결과 머리글이 없음. 서버 구성 문제입니까?';
$labels['signaturepass'] = '발신인 도메인에서 유효한 서명임. 검증자:';
$labels['partialpass'] = '일부 서명이 유효하지 않으나 최소 한 개는 발신인의 도메인에 대해 유효함. 검증자:';
$labels['thirdparty'] = 'Signed by third party, signature is present but for different domain than from address. verified for ';
$labels['temporaryinvalid'] = '서명이 (일시적으로) 유효하지 않음! 검증자:';
$labels['invalidsignature'] = '서명이 유효하지 않음! 검증자:';

$labels['for'] = 'for';
$labels['by'] = '검증자:';

$labels['section_title']  = '인증 상태';
$labels['column_title']  = '인증 결과';

$labels['title_enable_column']  = '열 활성화';
$labels['label_enable_column']  = '메시지 목록에 인증 결과 열을 활성화';

$labels['title_include_status'] = '다음 상태만 표시';
$labels['label_include_status1']  = '서명을 찾을 수 없음';
$labels['label_include_status2']  = '서명을 찾았으나 인증 결과 머리글이 없음';
$labels['label_include_status4']  = '모든 서명이 검증을 통과함';
$labels['label_include_status8']  = '최소 한 개의 서명이 검증을 통과함';
$labels['label_include_status16']  = '제3자 서명';
$labels['label_include_status32']  = '서명이 일시적으로 실패함';
$labels['label_include_status64']  = '서명이 영구적으로 실패함';

?>
