<?php

// The expected image paths in the tests are the pre-1.7 ones (no static.php/ prefix).
if (!defined('RCUBE_VERSION')) {
    define('RCUBE_VERSION', '1.6.0');
}

class rcube_plugin
{

    public $urlbase = 'plugins/authres_status/';

    public function gettext($p)
    {
        global $labels;
    
        if (!isset($labels)) {
            include __DIR__ . "/../localization/en_US.inc";
        }

        return $labels[$p];
    }
}
