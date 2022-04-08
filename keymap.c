#include QMK_KEYBOARD_H
#include "keymap_french.h"

#define ____ KC_TRNS

enum layers {
  LINUXWIN = 0,
  MAC,
  FN1,
  FN2,
  FN3
};

enum keycodes {
    CLASSIC_LAYER_KEYCODE = SAFE_RANGE,
    MACOS_KEYCODE
};

/* LAYOUT_CUSTOM_60_ISO
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0d │0e │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │10   │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐2d  │
 * │20    │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │1e │    │
 * ├───┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
 * │30 │31 │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3c │3d │3e │
 * ├───┴┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┼───┤
 * │40  │41  │43  │46                      │4a │4b │4c │4d │4e │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┘
*/
#define LAYOUT_CUSTOM_60_ISO( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, \
    k10,      k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d,      \
    k20,      k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k1e, k2d, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e,   \
    k40, k41,      k43,           k46,                k4a, k4b, k4c, k4d, k4e  \
) { \
    { k00,  k01,   k02,   k03,  k04,   k05,   k06,  k07,   k08,   k09,   k0a,  k0b,  k0c, k0d, k0e   }, \
    { k10,  KC_NO, k12,   k13,  k14,   k15,   k16,  k17,   k18,   k19,   k1a,  k1b,  k1c,   k1d,   k1e   }, \
    { k20,  KC_NO, k22,   k23,  k24,   k25,   k26,  k27,   k28,   k29,   k2a,  k2b,  k2c,   k2d,   KC_NO }, \
    { k30,  k31,   k32,   k33,  k34,   k35,   k36,  k37,   k38,   k39,   k3a,  k3b,  k3c, k3d, k3e }, \
    { k40,  k41,   KC_NO, k43,  KC_NO, KC_NO, k46,  KC_NO, KC_NO, KC_NO, k4a,  k4b,  k4c, k4d, k4e   }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [LINUXWIN] = LAYOUT_CUSTOM_60_ISO(
        KC_GESC, FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN, FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, FR_RPRN, FR_EQL, KC_INSERT, KC_BSPC,
        KC_TAB, FR_A, FR_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, FR_CIRC, FR_DLR,
        LT(FN1, KC_CAPS_LOCK), FR_Q, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, FR_M, FR_UGRV, FR_ASTR, KC_ENT,
        KC_LSFT, FR_LABK, FR_W, KC_X, KC_C, KC_V, KC_B, KC_N, FR_COMM, FR_SCLN, FR_COLN, FR_EXLM, MO(FN3), KC_UP, KC_RSFT,
        KC_LCTL, KC_LCMD, KC_LALT, KC_SPC, KC_ALGR, MO(FN2), KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [MAC] = LAYOUT_CUSTOM_60_ISO(
        KC_GESC, FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN, FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, FR_RPRN, FR_EQL, KC_INSERT, KC_BSPC,
        KC_TAB, FR_A, FR_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, FR_CIRC, FR_DLR,
        LT(FN1, KC_CAPS_LOCK), FR_Q, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, FR_M, FR_UGRV, FR_ASTR, KC_ENT,
        KC_LSFT, FR_LABK, FR_W, KC_X, KC_C, KC_V, KC_B, KC_N, FR_COMM, FR_SCLN, FR_COLN, FR_EXLM, MO(FN3), KC_UP, KC_RSFT,
        KC_LCMD, KC_LCTL, KC_LALT, KC_SPC, KC_ALGR, MO(FN2), KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [FN1] = LAYOUT_CUSTOM_60_ISO(
        RESET, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, CLASSIC_LAYER_KEYCODE, MACOS_KEYCODE,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_PGUP, ____,
        ____, ____, ____, ____, ____, ____, KC_HOME, KC_PGDOWN, KC_END
    ),

    [FN2] = LAYOUT_CUSTOM_60_ISO(
        KC_PSCR, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INSERT, KC_DELETE,
        ____, KC_VOLD, KC_AUDIO_MUTE, KC_VOLU, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, KC_MPRV, KC_MPLY, KC_MNXT, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, KC_BRID, KC_BRIU, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____
    ),

    [FN3] = LAYOUT_CUSTOM_60_ISO(
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CLASSIC_LAYER_KEYCODE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(LINUXWIN);
            }
            return false;
        break;

        case MACOS_KEYCODE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(MAC);
            }
            return false;
        break;
    }

    return true;
}
