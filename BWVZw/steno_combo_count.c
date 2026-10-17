// ==== CUSTOM: steno word combos (hand-written, not from Oryx) ====
// Appends the word combos defined at the bottom of keymap.c after Oryx's own
// key_combos[]. This has to live outside keymap.c: QMK compiles keymap.c inside
// quantum/keymap_introspection.c, which holds the weak combo_count() and
// combo_get() defaults, and a weak function can only be overridden from
// another file.
#include QMK_KEYBOARD_H
#include "keymap_introspection.h"

#ifdef COMBO_COUNT

extern combo_t        word_combos[];
extern const uint16_t word_combo_count;

uint16_t combo_count(void) {
    return combo_count_raw() + word_combo_count;
}

combo_t *combo_get(uint16_t combo_idx) {
    uint16_t oryx_count = combo_count_raw();
    if (combo_idx < oryx_count) {
        return combo_get_raw(combo_idx);
    }
    combo_idx -= oryx_count;
    if (combo_idx >= word_combo_count) {
        return NULL;
    }
    return &word_combos[combo_idx];
}

#endif // COMBO_COUNT
