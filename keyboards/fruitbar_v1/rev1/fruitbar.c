/* Copyright 2021 Brandon Lewis
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

#include "fruitbar.h"

enum layers {
	_BASE,
	_FN
};

#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) { return false; }
	if(index == 0) {
		if (clockwise) {
			tap_code(KC_VOLD);
		} else {
			tap_code(KC_VOLU);
			}
		}
	return true;
}
#endif

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_270;
}

__attribute__((weak)) void oled_task_user(void) {
	oled_write_P(PSTR("\n\n"), false);
	oled_write_ln_P(PSTR("LAYER"), false);
	oled_write_ln_P(PSTR(""), false);
	switch (get_highest_layer(layer_state)) {
		case _BASE:
			oled_write_P(PSTR("BASE\n"), false);
			break;
		case _FN:
			oled_write_P(PSTR("FN\n"), false);
			break;
	}
}

#endif
