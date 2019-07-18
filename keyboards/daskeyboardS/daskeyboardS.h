/* Copyright 2019 Fabian Jackl
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty ofwd
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.	
 */
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
k00,      k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12,      k13, k14, k15,\
k16, k17, k18, k19, k20, k21, k22, k23, k24, k25, k26, k27, k28, k29,      k30, k31, k32,      k87, k88, k89, k90,\
k33, k34, k35, k36, k37, k38, k39, k40, k41, k42, k43, k44, k45, k46,      k47, k48, k49,      k91, k92, k93, k94,\
k50,      k51, k52, k53, k54, k55, k56, k57, k58, k59, k60, k61, k62,                          k95, k96, k97,\
k74,      k64, k65, k66, k67, k68, k69, k70, k71, k72, k73,      k63,           k75,           k98, k99, k1a, k1b,\
k76, k77, k78,                k79,                k80, k81, k82, k83,      k84, k85, k86,      k1c,      k1d\
) \
{ \
{k06, k78, KC_NO, k56, k55, k04, KC_NO, k00, KC_NO, k11, k1c, k61, k79, k1d, KC_NO, KC_NO, KC_NO, k75}, \
{k24, k13, k25, k23, k20, k19, k18, k17, k05, k10, KC_NO, k26, KC_NO, k49, KC_NO, KC_NO, KC_NO, k48}, \
{k28, KC_NO, k08, k22, k21, k02, k01, k16, k76, k09, k30, k27, k47, k32, KC_NO, KC_NO, KC_NO, k31}, \
{k58, KC_NO, k59, k57, k54, k53, k52, k51, KC_NO, k46, k99, k60, k98, k1a, k81, KC_NO, k63, k1b}, \
{k45, k77, k07, k39, k38, k03, k50, k33, KC_NO, k29, k96, k44, k95, k97, KC_NO, KC_NO, k74, KC_NO}, \
{k41, k14, k42, k40, k37, k36, k35, k34, k15, KC_NO, k92, k43, k91, k93, KC_NO, KC_NO, KC_NO, k94}, \
{k71, KC_NO, k72, k70, k67, k66, k65, k64, k83, k62, k88, KC_NO, k87, k89, KC_NO, KC_NO, KC_NO, KC_NO}, \
{KC_NO, k80, k82, k69, k68, KC_NO, KC_NO, KC_NO, KC_NO, k12, k86, k73, k85, k90, KC_NO, KC_NO, KC_NO, k84}, \
}
