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
	int a, c;
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
		napms(40 / g->b->speed);
	}
} 

void loadgame(game *g, char *name) {
	FILE *fp;
	int i;
	fp = fopen(name, "r");
	fscanf(fp, "%d %d %d %d %d %d %d %d", &g->row, &g->column, &g->score, &g->exit, &g->level, &g->count_bricks, &g->lives, &g->points);	
	readball(g, fp);	 
	readslider(g, fp);
	for(i = 0; i < g->count_bricks; i++) {
		fscanf(fp, "%d %d %d %d %d %d", &g->br[i].x, &g->br[i].y, &g->br[i].life, &g->br[i].state, &g->br[i].width, &g->br[i].color);
	}
	//initgame(g);
	//startgame(g);
	//napms(3000);
	fclose(fp);
}

void savegame(game *g) {
	FILE *fp;
	int i;
	char *name = (char *)malloc(24);
	mvwaddstr(stdscr, g->row / 2 , g->column / 2 - 5, "Enter Name:");
	//move(g->row / 2 + 5, g->column / 2 - 5);
	echo();
	nodelay(stdscr, FALSE);
	scanw("%s", name);
	noecho();
	nodelay(stdscr, TRUE);
	fp = fopen(name, "w");
	fprintf(fp, "%d %d %d %d %d %d %d %d", g->row, g->column, g->score, g->exit, g->level, g->count_bricks, g->lives, g->points);	
	writeball(g, fp);
	writeslider(g, fp);
	for(i = 0; i < g->count_bricks; i++) {
		fprintf(fp, "%d %d %d %d %d %d", g->br[i].x, g->br[i].y, g->br[i].life, g->br[i].state, g->br[i].width, g->br[i].color);	
	}
	fclose(fp);
	insertl(&g->game, 1, name);
}

