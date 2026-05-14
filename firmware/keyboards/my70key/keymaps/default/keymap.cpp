#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {KEYMAP(
KC_GRAVE,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,
KC_ESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,
KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,
KC_LCTL,KC_LALT,KC_LGUI,KC_NO,  KC_NO,  KC_SPC, KC_NO,
KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,
KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,
KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT, KC_NO,
KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_UP  ,KC_1  , KC_2,
KC_NO,  KC_NO  ,L_FN,  KC_LEFT,KC_DOWN,KC_RGHT,KC_3
    )};

void setupKeymap() {
    uint32_t fn[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,
KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_PSCR,KC_SLCK,
KC_INS, KC_HOME,KC_PGUP,KC_PGDN,KC_END, KC_DEL, KC_PAUSE,
KC_MUTE,KC_VOLD,KC_VOLU,KC_MPRV,KC_MPLY,KC_MNXT,KC_MSTP,
KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_MS_U,KC_MS_D,KC_MS_L,KC_MS_R,KC_WH_U,KC_WH_D,KC_NO,
KC_BTN1,KC_BTN2,KC_ACL0,KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO
        );

    for (int row = 0; row < MATRIX_ROWS; ++row)
        for (int col = 0; col < MATRIX_COLS; ++col)
            matrix[row][col].addActivation(_FN, Method::PRESS, fn[row][col]);
}
