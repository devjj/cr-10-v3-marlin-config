# cr-10-v3-marlin-config

My configuration for Marlin 2.x and my CR-10 V3

Forked from: https://github.com/MarlinFirmware/Configurations/tree/import-2.0.x/config/examples/Creality/CR-10%20V2

My original post: https://www.pickysysadmin.ca/2020/08/16/marlin-2-x-for-a-cr-10-v3/

I have successfully printed using this configuration.

The firmware has X and Y offsets pre-configured in it for the BLTouch based on this mount: [CR-10 V2 BL Touch Mount](https://www.thingiverse.com/thing:3947349)

I did not configure the Z offset in firmware since that might be unique per printer.

# Downloads
Pre-compiled firmware can be found in the [Compiled Firmware](https://git.pickysysadmin.ca/FiZi/cr-10-v3-marlin-config/-/tree/master/Compiled%20Firmwares/) folder or on the [Releases](https://git.pickysysadmin.ca/FiZi/cr-10-v3-marlin-config/-/releases/) page

# Extra info

Post firmware flash I recommend running the following GCode:

```
M502; Factory reset your printer
M500; Save settings
M851 Z-2.370; Set Z Probe Offset
M500; Save settings
M501; Load settings
```

Enjoy!

![Status Screen](/images/status-screen.jpeg)

![Version Screen](/images/version-screen.jpeg)