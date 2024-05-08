/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define MASTER_LEFT
//#define MASTER_RIGHT

//#define EE_HANDS

// unique vial keyboard UID
#define VIAL_KEYBOARD_UID {0x9B, 0x0D, 0x0D, 0x15, 0xBA, 0x52, 0x01, 0x1C}

#define VIAL_UNLOCK_COMBO_ROWS { 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0 }

// shrink firmware
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_COMBO_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4
#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING
#define NO_MUSIC_MODE
