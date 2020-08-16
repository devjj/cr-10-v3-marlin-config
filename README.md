# cr-10-v3-marlin-config

My configuration for Marlin 2.x and my CR-10 V3

Forked from: https://github.com/MarlinFirmware/Configurations/tree/import-2.0.x/config/examples/Creality/CR-10%20V2

I have successfully printed using this configuration and I think my remaining quality issues have to do with the slicer/bed leveling.

Something I noticed when loading new versions of this firmware is that previous settings are staying in place. For example the most recent change changed the E Steps from 97mm/sec to 415mm/sec. After flashing the change didn't take but was in the firmware.

Turns out this was because I'm using EEPROM to store my settings and flashing a new firmware doesn't override these. Makes sense right? Something to keep an eye on if you're using these firmwares and not resetting your EEPROM each time.

Enjoy!

![Status Screen](/images/status-screen.jpeg)

![Version Screen](/images/version-screen.jpeg)