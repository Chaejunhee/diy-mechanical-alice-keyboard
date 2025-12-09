// Copyright 2023 Chae Jun hee (@cjh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define SPLIT_MODS_ENABLE
#define SOFT_SERIAL_PIN D0
//#define MASTER_LEFT
#define EE_HANDS
#define SPLIT_USB_DETECT

#define MATRIX_ROWS 10
#define MATRIX_COLS 9

#define MATRIX_COL_PINS_RIGHT { D3, D2, D1, D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { B6, B2, B3, B1, F7 }
#define MATRIX_COL_PINS { D1, D4, C6, D7, E6, B4, B5,D3,D2 }
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }



#define DIODE_DIRECTION COL2ROW




//#define SELECT_SOFT_SERIAL_SPEED 1

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


