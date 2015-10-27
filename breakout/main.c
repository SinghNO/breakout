#include "main.h"
int main() {
	game new;
	initmenu(&new);
	endwin();
	initscr();
	noecho();
	curs_set(FALSE);
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	wbkgd(stdscr, COLOR_PAIR(1));
	refresh();	
	initgame(&new);
	startgame(&new);
	clear();
	initmenu(&new);
	endwin();
	return 0;
}

