CONSOLE_ENABLE = no
COMMAND_ENABLE = no
ORYX_ENABLE = yes
RGB_MATRIX_CUSTOM_KB = yes
STENO_ENABLE = yes
STENO_PROTOCOL = geminipr
KEYBOARD_SHARED_EP = yes
SPACE_CADET_ENABLE = no
REPEAT_KEY_ENABLE = yes
COMBO_ENABLE = yes

# ==== CUSTOM: steno word combos (hand-written, not from Oryx) ====
# Oryx sets this too while it has combos; repeated so the word combos keep building.
COMBO_ENABLE = yes
SRC += steno_combo_count.c
