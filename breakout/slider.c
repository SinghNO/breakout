/*  All functions related to slider are stated here.
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
#include"main.h"

//function to initialize the slider.
void initslider(game *g) {
	g->s = (slider *)malloc(sizeof(slider));
	g->s->x = g->column / 2 - 5;
	g->s->y = 3 * g->row / 4;
	if(g->level == 1) {
		g->s->columns = 15;
	}
	else if(g->level == 2) {
		g->s->columns = 10;
	}
	else if(g->level == 3) {
		g->s->columns = 10;
	}
}

//function to print the slider.
void printslider(game *g) {
	if(g->level == 1) {
		mvprintw(g->s->y, g->s->x, "***************");
	}
	else if(g->level == 2) {
		mvprintw(g->s->y, g->s->x, "**********");
	}
	else if(g->level == 3) {
		mvprintw(g->s->y, g->s->x, "**********");
	}
}

//function to move the slider.
void moveslider(game *g ,int ch) {
	  switch(ch) {
		case KEY_RIGHT:
			g->s->x += 2;
			break; 
			
		case KEY_LEFT:
			g->s->x -= 2;
			break;

		default:
			break;
	}
}

