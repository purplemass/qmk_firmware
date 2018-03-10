/* Copyright 2018 purplemass
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* This is purplemass's custum layout provided for the KBP V60 Type R
 * Polestar keyboard.
*/
#include "v60_type_r.h"

enum layers {
  _0_DEFAULT,
  _1_FUNCTION,
  _2_MACROS,
  _3_ARROWS,
};

enum macros {
  mXXX,
  mNK1, // GUI + number key
  mNK2,
  mNK3,
  mNK4,
  mNK5,
  mNK6,
  mNK7,
  mNK8,
  mNK9,
  mNK0,
};

#define _______ KC_TRNS
#define XXXXX KC_NO
#define MOD_LEFT RGUI_T(KC_LEFT)
#define MOD_DOWN ALT_T(KC_DOWN)
#define MOD_RIGHT RCTL_T(KC_RIGHT)
#define MOD_UP RSFT_T(KC_UP)
#define TG_ARROWS TG(_3_ARROWS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_0_DEFAULT] = KEYMAP(

    // 0: Base Layer (Qwerty)
    // .--------------------------------------------------------------------------------------------------------------------------------------.
    // | ~      | !      | @      | #      | $      | %      | ^      | &      | *      | (      | )      | _      | +      |░░░░░|           |
    // |        |        |        |        |        |        |        |        |        |        |        |        |        |░░░░░|           |
    // | Esc    | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | -      | =      |░░░░░| Backspace |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, XXXXX, KC_BSPC, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |            |        |        |        |        |        |        |        |        |        |        | {      | ]      | |           |
    // |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    // | Tab        | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [      | ]      | \           |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |               |        |        |        |        |        |        |        |        |        | :      | "      |                   |
    // |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    // | FnO           | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      | Enter             |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         MO(1),          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |          |░░░░░░░░|        |        |        |        |        |        |        | <      | >      | ?      |               |░░░░░░░░|
    // |          |░░░░░░░░|        |        |        |        |        |        |        |        |        |        | MOD           |░░░░░░░░|
    // | Shift    |░░░░░░░░| Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | Shift         |░░░░░░░░|
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         KC_LSFT,  XXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MOD_UP,        XXXXX, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |          |          |          |                                                         |          |          |          |          |
    // |          |          |          |                                                         |          | MOD      | MOD      | MOD      |
    // | Ctrl     | Win      | Alt      | Space                                                   | FnO      | Left     | Down     | Right    |
    // '--------------------------------------------------------------------------------------------------------------------------------------'
         KC_LCTL,   KC_LALT,   KC_LGUI,   LT(_2_MACROS, KC_SPC),                                    MO(1),     MOD_LEFT,  MOD_DOWN,  MOD_RIGHT),
    // '--------------------------------------------------------------------------------------------------------------------------------------'

  [_1_FUNCTION] = KEYMAP(

    // 1: Function Layer
    // .--------------------------------------------------------------------------------------------------------------------------------------.
    // |        |        |        |        |        |        |        |        |        |        |        |        |        |░░░░░|           |
    // |        |        |        |        |        |        |        |        |        |        |        |        |        |░░░░░|           |
    // | Esc    | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    |░░░░░| Delete    |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, XXXXX, KC_DEL, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    // |            |        |        | RGB    | RGB    | RGB    | RGB    |        |        |        |        |        |        |             |
    // | Reset      |        | Up     | Toggle | Red+   | Green+ | Blue+  |        | PrtSc  | ScLock | Pause  | Up     |        | Insert      |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         RESET,       _______, KC_UP,   RGB_TOG, RGB_RI,  RGB_GI,  RGB_BI,  _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   _______, KC_INS, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    // |               |        |        |        | RGB    | RGB    | RGB    |        |        | Page   |        |        |                   |
    // |               | Left   | Down   | Right  | Red-   | Green- | Blue-  |        | Home   | Up     | Left   | Right  | Enter             |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______,       KC_LEFT, KC_DOWN, KC_RIGHT, RGB_RD,  RGB_GD,  RGB_BD, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT, _______, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |          |░░░░░░░░|        |        |        |        |        |        |        |        |        |        |               |░░░░░░░░|
    // |          |░░░░░░░░|        |        |        |        |        |        |        |        | Page   |        | Page          |░░░░░░░░|
    // | Shift    |░░░░░░░░| BLMd-  | BLMd   | BLMd+  |        | Vol-   | Vol+   | Mute   | End    | Down   | Down   | Up            |░░░░░░░░|
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______,  XXXXX,    BL_INC,  BL_TOGG, BL_DEC,  _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_END,  KC_PGDN, KC_DOWN,  KC_PGUP,      XXXXX,  \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |          |          |          |                                                         |          |          |          |          |
    // |          |          |          |                                                         |          |          | Page     |          |
    // |          |          |          |                                                         |          | Left     | Down     | Right    |
    // '--------------------------------------------------------------------------------------------------------------------------------------'
         M(mNK1),   _______,  TG_ARROWS,  _______,                                                 _______,    KC_LEFT,   KC_PGDN,   KC_RIGHT),
    // '--------------------------------------------------------------------------------------------------------------------------------------'

  [_2_MACROS] = KEYMAP(

    // 1: XXX Layer
    // .--------------------------------------------------------------------------------------------------------------------------------------.
    // |        |        |        |        |        |        |        |        |        |        |        |        |        |░░░░░|           |
    // |        |        |        |        |        |        |        |        |        |        |        |        |        |░░░░░|           |
    // |        |        |        |        |        |        |        |        |        |        |        |        |        |░░░░░|           |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______, M(mNK1), M(mNK2), M(mNK3), M(mNK4), M(mNK5), M(mNK6), M(mNK7), M(mNK8), M(mNK9), M(mNK0), _______, _______, XXXXX, _______, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    // |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    // |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    // |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    // |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______,       _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |          |░░░░░░░░|        |        |        |        |        |        |        |        |        |        |               |░░░░░░░░|
    // |          |░░░░░░░░|        |        |        |        |        |        |        |        |        |        | Page          |░░░░░░░░|
    // |          |░░░░░░░░|        |        |        |        |        |        |        |        |        |        | Up            |░░░░░░░░|
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______,  XXXXX,    _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, KC_PGUP,      XXXXX,  \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |          |          |          |                                                         |          |          |          |          |
    // |          |          |          |                                                         |          | Page     | Page     | Page     |
    // |          |          |          |                                                         |          | Up       | Down     | Down     |
    // '--------------------------------------------------------------------------------------------------------------------------------------'
         _______,   _______,  _______,    _______,                                                 _______,    KC_PGUP,   KC_PGDN,   KC_PGDN),
    // '--------------------------------------------------------------------------------------------------------------------------------------'


  [_3_ARROWS] = KEYMAP(

    // 1: XXX Layer
    // .--------------------------------------------------------------------------------------------------------------------------------------.
    // |        |        |        |        |        |        |        |        |        |        |        |        |        |░░░░░|           |
    // |        |        |        |        |        |        |        |        |        |        |        |        |        |░░░░░|           |
    // |        |        |        |        |        |        |        |        |        |        |        |        |        |░░░░░|           |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXX, _______, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    // |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    // |            |        |        |        |        |        |        |        |        |        |        |        |        |             |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    // |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    // |               |        |        |        |        |        |        |        |        |        |        |        |                   |
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______,       _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |          |░░░░░░░░|        |        |        |        |        |        |        |        |        |        |               |░░░░░░░░|
    // |          |░░░░░░░░|        |        |        |        |        |        |        |        |        |        |               |░░░░░░░░|
    // |          |░░░░░░░░|        |        |        |        |        |        |        |        |        |        | UP            |░░░░░░░░|
    // |--------------------------------------------------------------------------------------------------------------------------------------|
         _______,  XXXXX,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,      XXXXX,  \
    // |--------------------------------------------------------------------------------------------------------------------------------------|
    // |          |          |          |                                                         |          |          |          |          |
    // |          |          |          |                                                         |          |          |          |          |
    // |          |          |          |                                                         |          | Left     | Down     | Right    |
    // '--------------------------------------------------------------------------------------------------------------------------------------'
         _______,   _______,   _______,   _______,                                                  _______,   KC_LEFT,   KC_DOWN,   KC_RIGHT),
    // '--------------------------------------------------------------------------------------------------------------------------------------'

};


const uint16_t PROGMEM fn_actions[] = {
};


// Macros only work in this function
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch(id) {

        case mXXX:
            if (record->event.pressed) {
                register_code(KC_RSFT);
            } else {
                unregister_code(KC_RSFT);
            }
            return false;
            break;

        case mNK1: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("1"));
            }
            return false;
            break;
        }

        case mNK2: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("2"));
            }
            return false;
            break;
        }

        case mNK3: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("3"));
            }
            return false;
            break;
        }

        case mNK4: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("4"));
            }
            return false;
            break;
        }

        case mNK5: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("5"));
            }
            return false;
            break;
        }

        case mNK6: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("6"));
            }
            return false;
            break;
        }

        case mNK7: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("7"));
            }
            return false;
            break;
        }

        case mNK8: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("8"));
            }
            return false;
            break;
        }

        case mNK9: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("9"));
            }
            return false;
            break;
        }

        case mNK0: {
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("10"));
            }
            return false;
            break;
        }
    }

    // return true;
    return MACRO_NONE;
};


void led_set_user(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // output low
        DDRE  |=  (1<<PE6);
        PORTE &= ~(1<<PE6);
    }
    else {
        // Hi-Z
        DDRE  &= ~(1<<PE6);
        PORTE &= ~(1<<PE6);
    }
}
