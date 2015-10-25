#include<ncurses.h>
#include<unistd.h>
#define DELAY 40000
void bounceball() {
	int x = 0, y = 0;
	int max_y = 0, max_x = 0;
	int next_x = 0;
	int next_y = 0;
	int speed1 = 1, speed2 = 1;
	//initscr();
	noecho();
	curs_set(0);
	getmaxyx(stdscr, max_y, max_x);
	while(1) {
		clear();
		mvprintw(y, x, "#");
		//mvprintw(36, 64, "**********");
		refresh();
		usleep(DELAY);
		next_y = y + speed1;
		next_x = x + speed2;
		if((next_y >= max_y || next_y < 0)) {
			speed1 *= -1;
			}
		else {
			x += speed2;
			y += speed1;
			}
		if(next_x >= max_x || next_x < 0) {
			speed2 *= -1;
			}
	 	if((next_y == 35) && (next_x >= 64 && next_x <= 74)) {
			speed1 *= -1;

		}
	}	
	//return 0;
	}

