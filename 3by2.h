#pragma once

#include "quantum.h"

/* LAYOUT_horizontal
 * │K00│K01│K02│
 * ├───┼───┼───┤
 * │K03│K04│K05│
 * └───┴───┴───┘
 */
#define LAYOUT_horizontal( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13, K14 \
) { \
	{ K00,   K01,   K02,   K03,   KC_NO }, \
	{ K10,   K11,   K12,   K13,   K14 } \
}

#define LAYOUT LAYOUT_horizontal
