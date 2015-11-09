#include"main.h"

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
		/*if(getch() == 'p')
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
		napms(40 / g->b->speed);
	}
} 
	

