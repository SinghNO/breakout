#include<ncurses.h>
#include<unistd.h>
#define DELAY 50000
	int x = 0, y = 0, c;
	int max_y = 0, max_x = 0;
	int next_x = 0;
	int next_y = 0;
	int speed1 = 1, speed2 = 1;
	
	int main() {
		initscr();
		noecho();
		curs_set(0);
		getmaxyx(stdscr, max_y, max_x);
		int p = max_x - 80;
       		int q = max_y - 8;
		clear();
		//drawbricks();
		mvprintw(y, x, "#");
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
		
		//bounceball();



	
		
	endwin();
	return 0;
	}

