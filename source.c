#include QMK_KEYBOARD_H

enum custom_keycodes {
    REP = SAFE_RANGE
};

// use REP in the layout
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = ...

uint16_t key = 0;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(record->event.pressed) {
        if(keycode == REP) {
            tap_code(key);
            return false;
        } else {
            key = keycode;
            return true;
        }
    }
    return true;
};
