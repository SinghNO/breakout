#include"main.h"
void initgame(game *g) {
	g->exit = 0;
	g->score = 0;
	g->level = 1;
	g->count_bricks = 27;
	getmaxyx(stdscr, g->row, g->column);
	initball(g);
	initbrick(g);
	initslider(g);
	screenupdate(g);
}
void startgame(game *g) {
	char c;
	while(1) {	
	c = getch();
	switch(c) {
		case 'x':moveslider(g, 'x');
			break;
		case 'z':moveslider(g, 'z');
			break;
		default:break;
	}
	moveball(g);
	screenupdate(g);
	}
}
void screenupdate(game *g) {
	clear();
	printball(g);
	printslider(g);
	printbrick(g);
	refresh();
	napms(200 / g-> b ->speed);
}
	
	

