/*  All necessary prototypes are header files declarations.
   Copyright (C) 2015  NIKUNJ SINGH
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA   */
#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <locale.h>
#include <unistd.h>
#include "game.h"
#include "ball.h"
#include "bricks.h"
#include "slider.h"
#include "menu.h"
#include "color.h"
int print_menu (int sty, int x, int alts, int width,char title[], char entries[][100], int start);
int n_chars (char *str);
void str_cp (char *dest, char *src);
