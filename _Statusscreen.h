/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "Creality/CR-10 V2"

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define STATUS_LOGO_Y      3
#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00011110,
  B00000000,B00000000,B00000000,B00000000,B00100001,
  B00000000,B00000000,B00000000,B00000000,B00100111,
  B00011101,B11000000,B10001100,B00000000,B00100111,
  B00100001,B00100001,B10010010,B00000000,B01000001,
  B00100001,B00100000,B10010010,B00000000,B10001110,
  B00100001,B11001110,B10010010,B00000000,B10010000,
  B00100001,B00100000,B10010010,B00000001,B00010000,
  B00100001,B00100000,B10010010,B00000001,B00100000,
  B00011101,B00100001,B11001100,B00000010,B00100000,
  B00000000,B00000000,B00000000,B00000100,B00010000,
  B00000001,B00010011,B00000000,B00001000,B00010000,
  B00000001,B00010100,B10000000,B00010000,B00001000,
  B00000001,B00010000,B10000000,B00100000,B00000100,
  B00000000,B10100011,B00000000,B01000111,B11110010,
  B00000000,B10100000,B10000000,B01000011,B11100010,
  B00000000,B01000100,B10000000,B00100000,B00000100,
  B00000000,B01000011,B00000000,B00011000,B11011000,
  B00000000,B00000000,B00000000,B00011001,B10000100,
  B00000000,B00000000,B00000000,B00100001,B11111100,
  B00000000,B00000000,B00000000,B00111111,B00000000
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
