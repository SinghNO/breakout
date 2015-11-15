/* All necessary functions for game are stated here.
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
typedef struct record {
	int a, b, c, d, e, f, g, h;
	int p[1024];
	int q[1024];
	int s[1024];
	int t[1024];
	int u[1024];
	int v[1024];
	}record;
record r;

typedef struct recordball {
	int a, b, c, d, e, f;
	}rball;
rball rb;

typedef struct recordslider {
	int a, b, c, d;
	}rslider;
rslider rs;

//function to initialize the game.
void initgame(game *g) {
	g->exit = 0;
	g->score = 0;
	g->level = 1;
	g->count_bricks = 27;
	g->points = 0;
	g->lives = 3;
	getmaxyx(stdscr, g->row, g->column);
	initball(g, 3);
	initbrick(g);
	initslider(g);
	screenupdate(g);
}

//function to start the game.
void startgame(game *g) {
	int c;
	while(1) {	
	c = getch();
	keypad(stdscr, TRUE);
	switch(c) {
		case KEY_RIGHT: moveslider(g, KEY_RIGHT);
			break;
		case KEY_LEFT: moveslider(g, KEY_LEFT);
			break;
		case 'q': g->exit = 1;
			break;
		case 's': savegame(g);
			g->exit = 1;
			break;
		/*case 'p':if(getch() == 'p');
		if(getch() == 'p')
			getch();*/ 
		default:break;
	}
	nodelay(stdscr, TRUE);
	flushinp();
	if(g->exit) {
		//initmenu(g);
		break;
	}
	moveball(g);
	screenupdate(g);
	}
}

//function to update the screen.
void screenupdate(game *g) {
	clear();
	printball(g);
	printslider(g);
	printbrick(g);
	printscore(g);
	printlives(g);
	refresh();
	if(g->level == 1) {
		napms(70 / g->b->speed);
	}
	if(g->level == 2) {
		napms(55 / g->b->speed);
	}
	if(g->level == 3) {
		napms(45 / g->b->speed);
	}
} 

void savegame(game *g) {
	FILE *fp;
	int i;
	char *name = (char *)malloc(24);
	mvwaddstr(stdscr, g->row / 2 , g->column / 2 - 5, "Enter Name:");
	echo();
	nodelay(stdscr, FALSE);
	scanw("%s", name);
	noecho();
	nodelay(stdscr, TRUE);
	fp = fopen(name, "a");
	r.a = g->row;
	r.b = g->column;
	r.c = g->score;
	r.d = g->exit;
	r.e = g->level;
	r.f = g->points;
	rb.a = g->b->x;
	rb.b = g->b->y;
	rb.c = g->b->life;
	rb.d = g->b->state;
	rb.e = g->b->direcx;
	rb.f = g->b->direcy;
	rs.a = g->s->x;
	rs.b = g->s->y;
	rs.c = g->s->columns;
	rs.d = g->s->speed;
	for(i = 0;i < g-> count_bricks; i++) {
		r.p[i] = g->br[i].x;
		r.q[i] = g->br[i].y;
		r.s[i] = g->br[i].life;
		r.t[i] = g->br[i].state;
		r.u[i] = g->br[i].width;
		r.v[i] = g->br[i].color;
	}
	for(i = 0; i < g->count_bricks; i++) {
		fwrite(&r, sizeof(r), 1, fp);
	}
	for(i = 0; i < 100; i++) {
		fwrite(&r, sizeof(r), 1 ,fp);
	}
	for(i = 0; i < 100; i++) {
		fwrite(&rb, sizeof(rb), 1, fp);
	}
	for(i = 0; i < 100; i++) {
		fwrite(&rs, sizeof(rs), 1, fp);
	}
	fclose(fp);
	//insertl(&g->game, 1, name);
}

void loadgame(game *g, char *name) {
	FILE *fp;
	int i;
	fp = fopen(name, "r");
	for(i = 0; i < g-> count_bricks; i++) {
		fread(&r, sizeof(r), 1, fp);
	}
	for(i = 0; i < 100; i++) {
		fread(&r, sizeof(r), 1, fp);
	}
	for(i = 0; i < 100; i++) {
		fread(&rb, sizeof(rb), 1, fp);
	}
	for(i = 0; i < 100; i++) {
		fread(&rs, sizeof(rs), 1, fp);
	}
	fclose(fp);
}
	
