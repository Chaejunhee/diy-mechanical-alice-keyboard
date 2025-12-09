// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


/*
  ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐    ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──────┐ ┌──┐
  │ES││1 ││2 ││3 ││4 ││5 ││6 │    │7 ││8 ││9 ││0 ││MI││EQ││BSPC  │ │PS│
  └──┘└──┘└──┘└──┘└──┘└──┘└──┘    └──┘└──┘└──┘└──┘└──┘└──┘└──────┘ └──┘
 ┌────┐┌──┐┌──┐┌──┐┌──┐┌──┐      ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌────┐ ┌──┐
 │TAB ││Q ││W ││E ││R ││T │      │Y ││U ││I ││O ││P ││LB││RB││NUBS│ │PG│
 └────┘└──┘└──┘└──┘└──┘└──┘      └──┘└──┘└──┘└──┘└──┘└──┘└──┘└────┘ └──┘
 ┌─────┐┌──┐┌──┐┌──┐┌──┐┌──┐      ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌───────┐  ┌──┐
 │CAPS ││A ││S ││D ││F ││G │      │H ││J ││K ││L ││SC││QU││ENT    │  │PG│
 └─────┘└──┘└──┘└──┘└──┘└──┘      └──┘└──┘└──┘└──┘└──┘└──┘└───────┘  └──┘
┌───────┐┌──┐┌──┐┌──┐┌──┐┌──┐   ┌──┐┌──┐┌──┐┌──┐┌──┐┌──┐┌─────┐       ┌──┐
│LSFT   ││Z ││X ││C ││V ││B │   │B ││N ││M ││CO││DO││SL││RSFT │  ┌──┐ │DE│
└───────┘└──┘└──┘└──┘└──┘└──┘   └──┘└──┘└──┘└──┘└──┘└──┘└─────┘  │UP│ └──┘
┌───┐┌───┐    ┌───┐┌─────────┐   ┌───────┐┌───┐   ┌───┐┌───┐     └──┘
│LCT││LGU│    │LAL││LSPC     │   │RSPC   ││RAL│   │FN ││RCT│ ┌──┐┌──┐┌──┐
└───┘└───┘    └───┘└─────────┘   └───────┘└───┘   └───┘└───┘ │LE││DO││RI│
                                                             └──┘└──┘└──┘
                                                             */


#define LAYOUT_1 0
#define LAYOUT_2 1
#define LAYOUT_3 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
        QK_GESC, KC_1,    KC_2,   KC_3, KC_4, KC_5, KC_6,    KC_7, KC_8, KC_9,          KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_PSCR,
        KC_TAB,  KC_Q,    KC_W,   KC_E, KC_R, KC_T,          KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
        KC_CAPS, KC_A,    KC_S,   KC_D, KC_F, KC_G,          KC_H, KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_PGDN,
        KC_LSFT, KC_Z,    KC_X,   KC_C, KC_V, KC_B,          KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
        KC_LCTL, KC_LGUI, KC_LALT,      KC_SPC,              KC_SPC,     KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT    

    ),

    [1] = LAYOUT(
        QK_GESC,  KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,   KC_F6,         KC_F7,    KC_F8,    KC_F9,                KC_F10,    KC_F11,   KC_F12,   _______, KC_DEL,
        _______,  _______,   _______,  _______,  _______,  _______,                _______,  _______,  _______,   _______,   _______,   _______,  _______,  _______, _______,
        _______,  _______,   _______,  _______,  _______,  _______,                _______,  _______,  _______,   _______,   _______,   _______,  _______,           _______,
        _______,  _______,   _______,  _______,  _______,  _______,                _______,  _______,  _______,   _______,   _______,   _______,  _______,  _______, _______,
        _______,  _______,   _______,            _______,                          _______,            _______,   _______,   _______,   _______,  _______,  _______          

    ),
    [2] = LAYOUT(
        _______,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS,  KC_TRNS,              KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,
        _______,  _______,   _______,  _______,  _______,  _______,                _______,  _______,  _______,   _______,   _______,   _______,  _______,  _______, _______,
        _______,  _______,   _______,  _______,  _______,  _______,                _______,  _______,  _______,   _______,   _______,   _______,  _______,           _______,
        _______,  _______,   _______,  _______,  _______,  _______,                _______,  _______,  _______,   _______,   _______,   _______,  _______,  _______, _______,
        _______,  _______,   _______,            _______,                          _______,            _______,   _______,   _______,   _______,  _______,  _______          

    )
};


/*#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_QWERTY] = LAYOUT(
        QK_GESC, KC_1,    KC_2,   KC_3, KC_4, KC_5, KC_6,    KC_7, KC_8, KC_9,          KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_PSCR,
        KC_TAB,  KC_Q,    KC_W,   KC_E, KC_R, KC_T,          KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
        KC_CAPS, KC_A,    KC_S,   KC_D, KC_F, KC_G,          KC_H, KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_PGDN,
        KC_LSFT, KC_Z,    KC_X,   KC_C, KC_V, KC_B,          KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_DEL,
        KC_LCTL, KC_LGUI, KC_LALT,      KC_SPC,              KC_SPC,     KC_RALT, MO(_LOWER),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT    


        
        
        
        
        



    ),

    [_LOWER] = LAYOUT(
        QK_GESC,  KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,   KC_F6,         KC_F7,    KC_F8,    KC_F9,                KC_F10,    KC_F11,   KC_F12,   _______, KC_DEL,
        _______,  _______,   _______,  _______,  _______,  _______,                _______,  _______,  _______,   _______,   _______,   _______,  _______,  _______, _______,
        _______,  _______,   _______,  _______,  _______,  _______,                _______,  _______,  _______,   _______,   _______,   _______,  _______,           _______,
        _______,  _______,   _______,  _______,  _______,  _______,                _______,  _______,  _______,   _______,   _______,   _______,  _______,  _______, _______,
        _______,  _______,   _______,            _______,                          _______,            _______,   _______,   _______,   _______,  _______,  _______          


        
        
        
        
        

    )
};*/
