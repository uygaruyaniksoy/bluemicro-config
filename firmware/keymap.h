#include <stdint.h>
#include "hid_keycodes.h"
#include "keyboard_config.h"
#include "advanced_keycodes.h"
#include "Key.h"
#include <array>

#define _DEFAULT 0
#define _FN 1

#define L_FN (LAYER_0 + _FN)

void setupKeymap();
extern std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix;
