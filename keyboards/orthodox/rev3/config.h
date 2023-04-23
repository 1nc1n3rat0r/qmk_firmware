/*
This is the c configuration file for the subproject

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2017 Art Ortenburger

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


// wiring of each half

//REV.3 PRO MICRO
#define MATRIX_ROW_PINS { D2, B4, B5 }
#define MATRIX_COL_PINS { D7, F4, F5, B6, B2, B3, B1, F7, F6 }

/*/
//REV.3 TEENSY
#define MATRIX_ROW_PINS { B0, C6, C7 }
#define MATRIX_COL_PINS { D2, F5, F6, D6, D7, B4, B5, B6, F7 }
/*/

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* key combination for command */
#define IS_COMMAND() ( \
    get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_LGUI)) \
)

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
