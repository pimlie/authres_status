authres_status plugin for roundcube
======================

This plugin checks the Authentication-Results headers that were added by your MTA and displays an icon to show the verification status. Parsing of the Authentication-Results headers is more or less done according to [RFC5451](https://tools.ietf.org/html/rfc5451) which supports DKIM, DomainKeys, SPF, Sender-ID, iprev and SMTP AUTH result values.

This plugin is partially based on [dkimstatus](https://github.com/jvehent/dkimstatus) by jvehent, which was based on a plugin by [Vladimir Mach](http://www.wladik.net).

Icons by [brankic1979](http://brankic1979.com/icons);

Install
----------------------
If not using composer, copy all files to your plugins/ folder and add 'authres_status' to your $config['plugins'] array in config/main.inc.php or config/config.inc.php.

Configuration
----------------------
If you want to enable the results column in your message list, enable this in your settings. You can also choose which statuses you would like to see/ignore.

Tested
----------------------
Tested on Roundcube 1.0.0, let me know if it works on previous version as well

