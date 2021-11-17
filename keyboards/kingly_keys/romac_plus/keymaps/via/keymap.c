#include QMK_KEYBOARD_H

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_7,  KC_8,  KC_9,
		KC_4,  KC_5,  KC_6,
		KC_1,  KC_2,  KC_3,
		MO(1), KC_0,  KC_DOT
	),
  
	[1] = LAYOUT(
		____, ____,    ____,
		____, ____,    ____,
		____, ____,    ____,
		____, ____,    ____,
	),
	  
	[2] = LAYOUT(
		____, ____,    ____,
		____, ____,    ____,
		____, ____,    ____,
		____, ____,    ____,
	),
	  
	[3] = LAYOUT(
		____, ____,    ____,
		____, ____,    ____,
		____, ____,    ____,
		____, ____,    ____,
	)
};
