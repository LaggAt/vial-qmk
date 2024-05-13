/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// define Handedness (connected via 10k resistor to 3.3v)
#define SPLIT_HAND_PIN GP6
//#define MASTER_LEFT
//#define MASTER_RIGHT

// connect both sides
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP4    // USART TX pin
#define SERIAL_USART_RX_PIN GP5    // USART RX pin

// right side: add joystick as pointing device (mouse)
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define ANALOG_JOYSTICK_X_AXIS_PIN GP8
#define ANALOG_JOYSTICK_Y_AXIS_PIN GP9
#define ANALOG_JOYSTICK_CLICK_PIN GP3

// left side: rotary encoder (volume control, what else?)
#define ENCODERS_PAD_A { GP8 }
#define ENCODERS_PAD_B { GP9 }
#define ENCODER_RESOLUTIONS { 1 }
#define ENCODERS_PAD_A_RIGHT { }
#define ENCODERS_PAD_B_RIGHT { }
#define ENCODER_RESOLUTIONS_RIGHT { }
// encoder uses "key" L50 for rotary click (see 5x6.h)

//#define EE_HANDS

// unique vial keyboard UID
#define VIAL_KEYBOARD_UID {0x9B, 0x0D, 0x0D, 0x15, 0xBA, 0x52, 0x01, 0x1C}

#define VIAL_UNLOCK_COMBO_ROWS { 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0 }

// configure features
#define VIAL_TAP_DANCE_ENTRIES 16
#define VIAL_COMBO_ENTRIES 16
#define VIAL_KEY_OVERRIDE_ENTRIES 16
#define DYNAMIC_KEYMAP_LAYER_COUNT 16

// #undef LOCKING_SUPPORT_ENABLE
// #undef LOCKING_RESYNC_ENABLE

// #define BACKLIGHT_BREATHING
// #define BACKLIGHT_PIN GP2
// #define RGBLIGHT_LED_COUNT 64
// #define RGBLIGHT_SPLIT
// #define RGBLED_SPLIT { 32, 32 }
