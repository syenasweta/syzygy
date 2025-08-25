// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_2x3(
        KC_S, KC_Y, CK_TOGG,
        MS_BTN1, MS_BTN2, MS_BTN3
    )
};

// Encoder
#ifdef ENCODER_ENABLE
    #if defined(ENCODER_MAP_ENABLE)
        const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
            [0] = { ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(LCTL(KC_MINS), LCTL(KC_PLUS)) },
        };
    #endif
#endif