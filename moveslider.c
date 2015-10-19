#include<ncurses.h>
#include<unistd.h>
#define DELAY 10000
int main(int argc, char *argv[]) {
	initscr();
	int x = 0, z;
	curs_set(FALSE);
	while(1) { 
		int c = getch();
		if(c == 'x') {
		clear();
		mvprintw(36, x, "**********");
		refresh();
		usleep(DELAY);
		x++;
		}
		else if(c == 'z') {
		x--;
		clear();
		mvprintw(36, x, "**********");
		refresh();
		usleep(DELAY);
          	}

		else {
			clear();
			mvprintw(36, x, "**********");
			refresh();
			usleep(DELAY);

		}  
	}        
	endwin();
 	return 0;
}
