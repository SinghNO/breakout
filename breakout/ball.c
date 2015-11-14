/*  all functions related to the ball are stated here.
   Copyright (C) 2015  NIKUNJ SINGH.
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

// function to initialize the ball.
void initball(game *g, int age) {
	g->b = (ball*)malloc(sizeof(ball));
	ball *c;
	c = g->b;
	c-> x = g->column/2 - 5;
	c-> y = g->row/2;
	c-> state = 1;
	c-> life = age;
	c-> speed = 1;
	c-> direcx = 1;
	c-> direcy = 1;
	}

// function to print the ball.

void printball(game *g) {
	mvprintw(g->b->y, g->b->x, "*");
}

//function to move the ball.

void moveball(game *g) {
	int k; 
	ball *t = g->b;
	if((t->x == g->column && t->direcx == 1) || (t->x == 0 && t->direcx == -1)) {
		t->direcx *= -1;
	}
	if((t->x == 136 && t->direcx == 1) || (t->x == 5 && t->direcx == -1)) {
		t->direcx *= -1;
	}
	if(t->y == g->row && t->direcy == 1) {
		--g->lives;
		if(g->lives == 0) {
			g->exit = 1;
		}
		g->s->x = g->column/2 - 5;
		g->s->y = 3 * g->row / 4;
		g->s->columns = 12; 
		napms(1000);
		initball(g, g->lives);
		}
	if(t->y == 0 && t->direcy == -1) {
		t->direcy *= -1;
	}
	if(t->y == g->s->y - 1 && t->direcy == 1) {
		if(g->level == 1) {
			if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 15)
				t->direcy *= -1;
			if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 15)
				t->direcy *= -1;
		}
		if(g->level == 2) {
			if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 10)
				t->direcy *= -1;
			if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 10)
				t->direcy *= -1;
		}
		if(g->level == 3) {
			if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 10)
				t->direcy *= -1;
			if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 10)
				t->direcy *= -1;
		}
	}
	k = brickindex(g);
	if(k) 
		t->direcy *= -1;
	if((t->x == g->column && t->direcx == 1) || (t->x == 0 && t->direcx == -1)) {
		t->direcx *= -1;
	}	 
	if(t->y == 0 && t->direcy == -1) {
		t->direcy *= -1;
	}
	if(t->y == g->s->y - 1 && t->direcy == 1) {
		if(g->level == 1) {
			if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 15)
				t->direcy *= -1;
			if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 15)
				t->direcy *= -1;
		}
		if(g->level == 2) {
			if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 10)
				t->direcy *= -1;
			if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 10)
				t->direcy *= -1;
		}
		if(g->level == 3) {
			if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 10)
				t->direcy *= -1;
			if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 10)
				t->direcy *= -1;
		}
	}	
	if((t->x == 136 && t->direcx == 1) || (t->x == 5 && t->direcx == -1)) {
		t->direcx *= -1;
	}
	g->b->x += g->b->direcx;
	g->b->y += g->b->direcy;	
}	



        
