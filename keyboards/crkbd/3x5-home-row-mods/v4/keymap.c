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
#define GO_0_1 LT(1,KC_BSPC)
#define GO_0_2 LT(2,KC_SPC)
#define GO_0_3 LT(3,KC_TAB)

// Homerow modifiers
#define HR_A MT(MOD_LGUI,KC_A)
#define HR_S MT(MOD_LALT,KC_S)
#define HR_D MT(MOD_LSFT,KC_D)
#define HR_F MT(MOD_LCTL,KC_F)
#define HR_J MT(MOD_LCTL,KC_J)
#define HR_K MT(MOD_LSFT,KC_K)
#define HR_L MT(MOD_LALT,KC_L)
#define HR_SCLN MT(MOD_LGUI,KC_SCLN)

#define HR_GRV MT(MOD_LGUI,KC_GRV)
#define HR_EQL MT(MOD_LALT,KC_EQL)
#define HR_LBRC MT(MOD_LSFT,KC_LBRC)
#define HR_RBRC MT(MOD_LCTL,KC_RBRC)
#define HR_DOWN MT(MOD_LCTL,KC_DOWN)
#define HR_UP MT(MOD_LSFT,KC_UP)
#define HR_RGHT MT(MOD_LALT,KC_RGHT)
#define HR_MINS MT(MOD_LGUI,KC_MINS)

#define HR_F5 MT(MOD_LGUI,KC_F5)
#define HR_F6 MT(MOD_LALT,KC_F6)
#define HR_F7 MT(MOD_LSFT,KC_F7)
#define HR_F8 MT(MOD_LCTL,KC_F8)

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
      XXXXXXX,    HR_A,    HR_S,    HR_D,    HR_F,    KC_G,                         KC_H,    HR_J,    HR_K,    HR_L, HR_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_ESC,  GO_0_1,  KC_DEL,     GO_0_3,  GO_0_2,  KC_ENT
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  HR_GRV,  HR_EQL, HR_LBRC, HR_RBRC, KC_QUOT,                      KC_LEFT, HR_DOWN,   HR_UP, HR_RGHT, HR_MINS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,  KC_INS,   AG_AE,   AG_OE,   AG_AA,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_BSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3( 
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                      S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), DT_PRNT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   S_GRV,   S_EQL,  S_LBRC,  S_RBRC,  S_QUOT,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,  S_MINS,   DT_UP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,  KC_INS,   AG_AE,   AG_OE,   AG_AA,                      KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT,  S_BSLS, DT_DOWN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4, RGB_TOG,                      KC_PSCR,   MS_B1,   MS_B2,  KC_APP, KC_MUTE, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   HR_F5,   HR_F6,   HR_F7,   HR_F8, RGB_VAI,                         MS_L,    MS_D,    MS_U,    MS_R, KC_VOLU, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12, RGB_VAD,                        MS_LW,   MS_DW,   MS_UW,   MS_RW, KC_VOLD, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
};
