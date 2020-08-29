# cr-10-v3-marlin-config

My configuration for Marlin 2.x and my CR-10 V3

Forked from: https://github.com/MarlinFirmware/Configurations/tree/import-2.0.x/config/examples/Creality/CR-10%20V2

I have successfully printed using this configuration.

The firmware has X and Y offsets pre-configured in it for the BLTouch based on this mount: [CR-10 V2 BL Touch Mount](https://www.thingiverse.com/thing:3947349)

I did not configure the Z offset in firmware since that might be unique per printer.

Post firmware flash I recommend running the following GCode:

```
M502; Factory reset your printer
M500; Save settings
M851 Z-2.350; Set Z Probe Offset
M500; Save settings
M501; Load settings
```

Enjoy!

![Status Screen](/images/status-screen.jpeg)

![Version Screen](/images/version-screen.jpeg)