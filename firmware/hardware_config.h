#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H
#include "hardware_variants.h"

#define MATRIX_ROWS 10
#define MATRIX_COLS 7
#define MATRIX_ROW_PINS { 2, 31, 29, 20, 13, 8, 6, 22, 15, 24 }
#define MATRIX_COL_PINS { 9, 38, 36, 11, 32, 43, 10 }

#define ARDUINO_NICE_NANO 1
#define UNUSED_PINS {}
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PWM_ON 0
#define WS2812B_LED_ON 0
#define BATTERY_TYPE BATT_LIPO

#define VCC_PIN 13
#define VCC_POLARITY_ON 0
#endif
