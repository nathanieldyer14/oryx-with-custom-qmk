#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_steno.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
};



#define DUAL_FUNC_0 LT(4, KC_R)
#define DUAL_FUNC_1 LT(4, KC_F14)
#define DUAL_FUNC_2 LT(15, KC_F8)
#define DUAL_FUNC_3 LT(3, KC_F22)
#define DUAL_FUNC_4 LT(6, KC_K)
#define DUAL_FUNC_5 LT(14, KC_F19)
#define DUAL_FUNC_6 LT(7, KC_F24)
#define DUAL_FUNC_7 LT(14, KC_A)
#define DUAL_FUNC_8 LT(7, KC_F2)
#define DUAL_FUNC_9 LT(12, KC_P)
#define DUAL_FUNC_10 LT(12, KC_F4)
#define DUAL_FUNC_11 LT(15, KC_F9)
#define DUAL_FUNC_12 LT(14, KC_O)
#define DUAL_FUNC_13 LT(10, KC_F)
#define DUAL_FUNC_14 LT(15, KC_R)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           LCTL(KC_GRAVE), KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DUAL_FUNC_4,    
    KC_TAB,         DUAL_FUNC_0,    KC_W,           KC_F,           KC_P,           DUAL_FUNC_1,    KC_PLUS,                                        RCTL(KC_PAGE_UP),KC_J,           KC_L,           KC_U,           KC_Y,           DUAL_FUNC_5,    KC_BSLS,        
    OSM(MOD_LSFT),  MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),DUAL_FUNC_2,    KC_EQUAL,                                                                       RCTL(KC_PGDN),  KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_RALT, KC_I),MT(MOD_RGUI, KC_O),KC_SCLN,        
    KC_LEFT_SHIFT,  MT(MOD_LSFT, KC_Z),KC_X,           KC_C,           KC_D,           DUAL_FUNC_3,                                    KC_K,           KC_H,           DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    ST_MACRO_0,     
    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT,        KC_RIGHT,       MO(10),                                                                                                         KC_F2,          KC_DOWN,        KC_UP,          KC_LBRC,        KC_RBRC,        KC_RIGHT_CTRL,  
    LT(2, KC_ESCAPE),LT(3, KC_SPACE),LT(4, KC_TAB),                  LT(5, KC_ENTER),LT(6, KC_BSPC), DUAL_FUNC_9
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_0,    KC_W,           KC_E,           KC_R,           DUAL_FUNC_10,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           DUAL_FUNC_12,   KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LSFT, KC_Z),KC_X,           KC_C,           KC_V,           DUAL_FUNC_11,                                   KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_POWER,
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     TO(1),          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_MS_JIGGLER_TOGGLE,                                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LSFT, KC_Z),KC_X,           KC_C,           KC_D,           TO(8),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_AUDIO_MUTE
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(LSFT(KC_Z)),KC_TRANSPARENT,                                 KC_TRANSPARENT, RCTL(KC_TAB),   RCTL(KC_LEFT),  RCTL(KC_DOWN),  RCTL(KC_UP),    RCTL(KC_RIGHT), KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  LCTL(KC_S),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(LSFT(KC_Z)),                                KC_INSERT,      KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_CAPS,                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_ENTER,       KC_BSPC,        KC_DELETE
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(LSFT(KC_Z)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN4,     KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN5,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_MS_ACCEL0,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_MS_BTN2,     KC_MS_BTN1,     KC_MS_BTN3
  ),
  [5] = LAYOUT_moonlander(
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_CIRC,                                        KC_PERC,        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        DUAL_FUNC_13,   
    KC_TRANSPARENT, KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COLN,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR,                                                                                                        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LPRN,        KC_RPRN,        KC_UNDS,                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SCLN,        KC_4,           KC_5,           KC_6,           KC_EQUAL,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_BSLS,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,                                                                                                        KC_RBRC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_DOT,         KC_0,           KC_TAB,                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         DUAL_FUNC_14,   
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_PAUSE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_SCRL,                                        KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,                                                                                                        KC_RABK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LABK,        KC_RABK,        KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(9),          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_GRAVE,                                       KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_M,                                                                           KC_NO,          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       ST_MACRO_1,     
    KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_LEFT_ALT,    LT(10, KC_GRAVE),                                                                                                KC_GRAVE,       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       TO(0),          
    KC_SPACE,       KC_SPACE,       KC_TAB,                         KC_ENTER,       KC_BSPC,        KC_DELETE
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_NO,                                          KC_NO,          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TO(8),          
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_NO,                                          KC_NO,          KC_J,           KC_L,           KC_U,           KC_Y,           KC_QUOTE,       KC_TRANSPARENT, 
    KC_NO,          KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_NO,                                                                          KC_NO,          KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_SCLN,        
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_0,        KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_ENTER,       KC_BSPC,        KC_DELETE
  ),
  [11] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [12] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_STENO_BOLT,                                  QK_STENO_GEMINI,STN_FN,         STN_RES1,       STN_RES2,       KC_TRANSPARENT, KC_TRANSPARENT, STN_PWR,        
    KC_TRANSPARENT, STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,         KC_TRANSPARENT,                                 KC_TRANSPARENT, STN_N6,         STN_N7,         STN_N8,         STN_N9,         STN_NA,         STN_NB,         
    KC_TRANSPARENT, STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,         STN_DR,         
    KC_TRANSPARENT, STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,                                        STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,         STN_ZR,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        STN_NC,         STN_NC,                                                                                                         STN_NC,         STN_NC,         KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    STN_A,          STN_O,          KC_TAB,                         KC_ESCAPE,      STN_E,          STN_U
  ),
};


const uint16_t PROGMEM combo0[] = { KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_RSFT, KC_N), MT(MOD_RALT, KC_I), MT(MOD_RCTL, KC_E), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_C, KC_D, DUAL_FUNC_6, COMBO_END};
const uint16_t PROGMEM combo3[] = { DUAL_FUNC_6, DUAL_FUNC_7, DUAL_FUNC_8, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_6, KC_7, KC_8, COMBO_END};
const uint16_t PROGMEM combo5[] = { LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_12),
    COMBO(combo1, RSFT(KC_I)),
    COMBO(combo2, ST_MACRO_13),
    COMBO(combo3, KC_MINUS),
    COMBO(combo4, TO(11)),
    COMBO(combo5, TO(12)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_A):
            return TAPPING_TERM + 200;
        case MT(MOD_LSFT, KC_T):
            return TAPPING_TERM -25;
        case MT(MOD_RSFT, KC_N):
            return TAPPING_TERM -25;
        case MT(MOD_RGUI, KC_O):
            return TAPPING_TERM + 200;
        case DUAL_FUNC_6:
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [1] = { {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {32,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255} },

    [2] = { {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {0,0,255}, {219,255,255}, {219,255,255}, {219,255,255}, {20,255,255}, {0,0,255}, {87,255,255}, {219,255,255}, {219,255,255}, {37,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255} },

    [3] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {132,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {132,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {132,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {132,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [4] = { {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255} },

    [5] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [6] = { {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255} },

    [7] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {132,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {132,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {132,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {132,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [8] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {74,255,255}, {129,255,192}, {74,255,255}, {0,0,0}, {0,0,255}, {129,255,192}, {129,255,192}, {74,255,255}, {0,0,0}, {0,0,255}, {74,255,255}, {129,255,192}, {74,255,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,255}, {74,255,255}, {74,255,255}, {32,255,255}, {32,255,255}, {74,255,255}, {0,0,255}, {235,255,224}, {0,0,0}, {0,0,0}, {172,255,255}, {0,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {74,255,255}, {129,255,192}, {0,0,255}, {0,0,0}, {32,255,255}, {74,255,255}, {129,255,192}, {0,0,255}, {32,255,255}, {32,255,255}, {74,255,255}, {129,255,192}, {0,0,255}, {0,0,0}, {32,255,255}, {0,0,0}, {129,255,192}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [9] = { {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {87,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {235,255,224}, {188,255,255}, {188,255,255}, {188,255,255}, {0,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {41,255,255}, {41,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,245,245}, {196,218,204}, {152,255,255}, {152,255,255}, {152,255,255}, {20,255,255}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {20,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {0,255,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255}, {20,209,255} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {184,255,255}, {109,255,255}, {109,218,204}, {0,0,0}, {0,0,0}, {184,255,255}, {109,255,255}, {109,255,255}, {0,0,0}, {0,0,0}, {184,255,255}, {109,255,255}, {109,255,255}, {0,0,255}, {0,0,0}, {184,255,255}, {109,255,255}, {109,255,255}, {184,255,255}, {0,0,0}, {184,255,255}, {109,255,255}, {109,255,255}, {228,120,255}, {0,0,0}, {0,0,0}, {109,255,255}, {109,255,255}, {0,0,255}, {184,255,255}, {228,120,255}, {184,255,255}, {109,255,255}, {109,255,255}, {0,255,255}, {0,0,0}, {184,255,255}, {109,255,255}, {109,255,255}, {0,0,0}, {0,0,0}, {184,255,255}, {109,255,255}, {109,255,255}, {0,0,0}, {228,120,255}, {184,255,255}, {109,255,255}, {109,255,255}, {0,0,255}, {228,120,255}, {184,255,255}, {109,255,255}, {109,255,255}, {184,255,255}, {228,120,255}, {184,255,255}, {109,255,255}, {109,255,255}, {228,120,255}, {0,0,0}, {0,0,0}, {109,255,255}, {109,255,255}, {0,0,255}, {184,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
      case 9:
        set_layer_color(9);
        break;
      case 10:
        set_layer_color(10);
        break;
      case 11:
        set_layer_color(11);
        break;
      case 12:
        set_layer_color(12);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(20)  SS_TAP(X_DOT)SS_DELAY(20)  SS_TAP(X_SLASH));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ENTER)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Q)SS_DELAY(10)  SS_TAP(X_U)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_C)SS_DELAY(10)  SS_TAP(X_K));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_R)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_L)SS_DELAY(10)  SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(10)  SS_TAP(X_U)SS_DELAY(10)  SS_TAP(X_R)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_O)SS_DELAY(10)  SS_TAP(X_U)SS_DELAY(10)  SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_L)SS_DELAY(10)  SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_N)SS_DELAY(10)  SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_V)SS_DELAY(10)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_U)SS_DELAY(10)  SS_TAP(X_T)SS_DELAY(10)  SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_F)SS_DELAY(10)  SS_TAP(X_U)SS_DELAY(10)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_P)SS_DELAY(10)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_C)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_N)SS_DELAY(10)  SS_TAP(X_T)SS_DELAY(10)  SS_TAP(X_L)SS_DELAY(10)  SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_P)SS_DELAY(10)  SS_TAP(X_O)SS_DELAY(10)  SS_TAP(X_N)SS_DELAY(10)  SS_TAP(X_G)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_P)SS_DELAY(10)  SS_TAP(X_O)SS_DELAY(10)  SS_TAP(X_T)SS_DELAY(10)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_S)SS_DELAY(10)  SS_TAP(X_K)SS_DELAY(10)  SS_TAP(X_E)SS_DELAY(10)  SS_TAP(X_T)SS_DELAY(10)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(20)  SS_TAP(X_D)SS_DELAY(20)  SS_TAP(X_SPACE)SS_DELAY(20)  SS_TAP(X_MINUS));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_Q);
        } else {
          unregister_code16(KC_Q);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LBRC);
        } else {
          unregister_code16(KC_LBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_B);
        } else {
          unregister_code16(KC_B);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RBRC);
        } else {
          unregister_code16(KC_RBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_G);
        } else {
          unregister_code16(KC_G);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_EQUAL);
        } else {
          unregister_code16(KC_EQUAL);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_BSLS);
        } else {
          unregister_code16(KC_BSLS);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_EQUAL);
        } else {
          unregister_code16(KC_EQUAL);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_DQUO);
        } else {
          unregister_code16(KC_DQUO);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_EXLM);
        } else {
          unregister_code16(KC_EXLM);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_BSPC));
        } else {
          unregister_code16(LCTL(KC_BSPC));
        }
      } else {
        if (record->event.pressed) {
          layer_on(7);
        } else {
          layer_off(7);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_T);
        } else {
          unregister_code16(KC_T);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RBRC);
        } else {
          unregister_code16(KC_RBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_B);
        } else {
          unregister_code16(KC_B);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_BSLS);
        } else {
          unregister_code16(KC_BSLS);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_P);
        } else {
          unregister_code16(KC_P);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PLUS);
        } else {
          unregister_code16(KC_PLUS);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F11);
        } else {
          unregister_code16(KC_F11);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F12);
        } else {
          unregister_code16(KC_F12);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

