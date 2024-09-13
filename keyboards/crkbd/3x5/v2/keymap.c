#include QMK_KEYBOARD_H

// AltGr combinations
#define AG_AE RALT(KC_Z)
#define AG_OE RALT(KC_L)
#define AG_AA RALT(KC_W)

// Mouse movement
#define MS_B1 KC_MS_BTN1
#define MS_B2 KC_MS_BTN2
#define MS_L KC_MS_LEFT
#define MS_D KC_MS_DOWN
#define MS_U KC_MS_UP
#define MS_R KC_MS_RIGHT
#define MS_LW KC_MS_WH_LEFT
#define MS_DW KC_MS_WH_DOWN
#define MS_UW KC_MS_WH_UP
#define MS_RW KC_MS_WH_RIGHT

// Layer switching
#define GO_0_1 LT(1,KC_DEL)
#define GO_0_2 LT(2,KC_TAB)
#define GO_0_3 LT(3,KC_SPC)

// Mod-Tap
#define MT_A_ES MT(MOD_LALT,KC_ESC)
#define MT_C_BS MT(MOD_LCTL,KC_BSPC)
#define MT_S_EN MT(MOD_LSFT,KC_ENT)

// Shifted keys
#define S_GRV S(KC_GRV)
#define S_EQL S(KC_EQL)
#define S_LBRC S(KC_LBRC)
#define S_RBRC S(KC_RBRC)
#define S_QUOT S(KC_QUOT)
#define S_MINS S(KC_MINS)
#define S_BSLS S(KC_BSLS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MT_A_ES,  GO_0_1, MT_C_BS,     GO_0_3,  GO_0_2, MT_S_EN
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_GRV,  KC_EQL, KC_LBRC, KC_RBRC, KC_QUOT,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_MINS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,  KC_INS,   AG_AE,   AG_OE,   AG_AA,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_BSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   S_GRV,   S_EQL,  S_LBRC,  S_RBRC,  S_QUOT,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT,  S_MINS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  S_BSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_PSCR,   MS_B1,   MS_B2,  KC_APP, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                         MS_L,    MS_D,    MS_U,    MS_R, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,                        MS_LW,   MS_DW,   MS_UW,   MS_RW, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
};
