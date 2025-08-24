// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_1x3(
        MS_BTN1, MS_BTN2, CK_TOGG
    )
};

// Encoder
#ifdef ENCODER_ENABLE
    #if defined(ENCODER_MAP_ENABLE)
        const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
            [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
        };
    #endif
#endif

// Pointing Device
#ifdef POINTING_DEVICE_ENABLE
    #include "analog.h"
    #include "pointing_device.h"
#endif