/* vga.h - this file belongs to garlix */
/* Copyright (C) 2018 Juan Garcia Garland <jota191@gmail.com>.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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



/* References: https://wiki.osdev.org/VGA_Hardware
 * Modern graphic cards are still compatible with vga, and also qemu
*/


#ifndef VGA_H
#define VGA_H

#define VGA_CRTC_ADDRESS 0x3D4
#define VGA_CRTC_DATA 0x3D5


// position of the cursor
# define VGA_CURSOR_HIGH 0x0E
# define VGA_CURSOR_LOW 0x0F

//colors
#define VGA_BLACK          0
#define VGA_BLUE           1
#define VGA_GREEN          2
#define VGA_CYAN           3
#define VGA_RED            4
#define VGA_MAGENTA        5
#define VGA_BROWN          6
#define VGA_LIGHT_GRAY     7
#define VGA_DARK_GRAY      8
#define VGA_LIGHT_BLUE     9
#define VGA_LIGHT_GREEN    10
#define VGA_LIGHT_CYAN     11
#define VGA_LIGHT_RED      12
#define VGA_LIGHT_MAGENTA  13
#define VGA_LIGHT_BROWN    14
#define VGA_WHITE          15


//functions to do things on screen

//scroll
void vga_scroll ();

//set value at position
void vga_putchar_at (char c, int x, int y);

//append char at cursor position
void vga_putchar (char c);

//set cursor
void vga_set_internal_cursor ();

//clrscrn
void vga_clear_screen ();

#endif
