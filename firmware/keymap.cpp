#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP(
KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,
KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,
KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,
KC_LCTL,KC_LALT,KC_LGUI,KC_SPC, KC_SPC, KC_RALT,KC_RCTL,
KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,
KC_INS, KC_HOME,KC_PGUP,KC_PGDN,KC_END, KC_DEL, KC_PSCR,
KC_SLCK,KC_PAUS,KC_UP,  KC_DOWN,KC_LEFT,KC_RGHT,KC_APP,
KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,
KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_ENT, KC_DELETE
    )};

void setupKeymap() {}
