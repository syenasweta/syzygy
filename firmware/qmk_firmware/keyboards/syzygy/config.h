/*
Copyright 2025 Syenasweta

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

/* serial driver setting */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_DRIVER SIOD0
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

/* Audio support */
#ifdef AUDIO_ENABLE
    #define AUDIO_PIN GP5
    #define AUDIO_PWM_DRIVER PWMD2
    #define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
    #define AUDIO_INIT_DELAY
    #define STARTUP_SONG SONG(STARTUP_SOUND)
#endif

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX
#define ENABLE_COMPILE_KEYCODE

