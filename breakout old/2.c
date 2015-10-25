#include<ncurses.h>
#include<unistd.h>
#define DELAY 5000
void moveslider() {
	int max_y = 0, max_x = 0;
	getmaxyx(stdscr, max_y, max_x);
	int p = max_x - 80;
	int q = max_y - 8;
	int c;
		if(c == 'x') {
		clear();
		p++;
		mvprintw(q, p, "**********");
		refresh();
		usleep(DELAY);
		}
		else if(c == 'z') {
		clear();
		p--;
		mvprintw(q, p, "**********");
		refresh();
		usleep(DELAY);
          	}

		/*else {
			clear();
			mvprintw(q, p, "**********");
			refresh();
			usleep(DELAY);

		} */ 
	}        


