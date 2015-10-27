#include"main.h"

//function to initialize the game.
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

//function to start the game.
void startgame(game *g) {
	char c, prevc = ERR;
//	nodelay(stdscr, TRUE);
	while(1) {	
	c = getch();
	switch(c) {
		case 'x':moveslider(g, 'x');
			break;
		case 'z':moveslider(g, 'z');
			break;
		case 'p':g->exit = 1;
			break;
		default:break;
	}
	nodelay(stdscr, TRUE);
	flushinp();
	if(g->exit)
		break;
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
	refresh();
	napms(100 / g->b->speed);
}
	
	

