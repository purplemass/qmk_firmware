/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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

/* disable print and debug print to save space */
#define NO_DEBUG
#define NO_PRINT

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#define V60_POLESTAR

#ifdef BACKLIGHT_LEVELS
#undef BACKLIGHT_LEVELS
#endif
#define BACKLIGHT_LEVELS 4

// Note: BACKLIGHT_BREATHING is not available

#endif
