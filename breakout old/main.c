#include<ncurses.h>
#define DELAY 1000
void drawbricks() {
	initscr();
	noecho();
	mvprintw(0, 0, "- - - - - - - -");
	mvprintw(1, 0, "-");
	mvprintw(2, 0, "-");
	mvprintw(3, 0, "-");
	mvprintw(4, 0, "- - - - - - - -");
	mvprintw(3, 14, "-");
	mvprintw(2, 14, "-");
	mvprintw(1, 14, "-");
	mvprintw(0, 14, "- - - - - - - -");
	mvprintw(1, 14, "-");
	mvprintw(2, 14, "-");
	mvprintw(3, 14, "-");
	mvprintw(4, 14, "- - - - - - - - ");
	mvprintw(3, 28, "-");
	mvprintw(2, 28, "-");
	mvprintw(1, 28, "-");
	mvprintw(0, 28, "-");
	mvprintw(0, 28 ,"- - - - - - - -");
        mvprintw(1, 28, "-");
        mvprintw(2, 28, "-");
        mvprintw(3, 28, "-");
        mvprintw(4, 28, "- - - - - - - -");
        mvprintw(3, 42, "-");
        mvprintw(2, 42, "-");
        mvprintw(1, 42, "-");
        mvprintw(0, 42, "- - - - - - - -");
        mvprintw(1, 42, "-");
        mvprintw(2, 42, "-");
        mvprintw(3, 42, "-");
        mvprintw(4, 42, "- - - - - - - - ");
        mvprintw(3, 56, "-");
        mvprintw(2, 56, "-");
        mvprintw(1, 56, "-");
        mvprintw(0, 56, "-");
	mvprintw(0, 56, "- - - - - - - -");
        mvprintw(1, 56, "-");
        mvprintw(2, 56, "-");
        mvprintw(3, 56, "-");
        mvprintw(4, 56, "- - - - - - - - ");
        mvprintw(3, 70, "-");
        mvprintw(2, 70, "-");
        mvprintw(1, 70, "-");
        mvprintw(0, 70, "-");
	mvprintw(0, 70, "- - - - - - - -");
        mvprintw(1, 70, "-");
        mvprintw(2, 70, "-");
        mvprintw(3, 70, "-");
        mvprintw(4, 70, "- - - - - - - - ");
        mvprintw(3, 84, "-");
        mvprintw(2, 84, "-");
        mvprintw(1, 84, "-");
        mvprintw(0, 84, "-");
	mvprintw(0, 84, "- - - - - - - -");
        mvprintw(1, 84, "-");
        mvprintw(2, 84, "-");
        mvprintw(3, 84, "-");
        mvprintw(4, 84, "- - - - - - - - ");
        mvprintw(3, 98, "-");
        mvprintw(2, 98, "-");
        mvprintw(1, 98, "-");
        mvprintw(0, 98, "-");
	mvprintw(0, 98, "- - - - - - - -");
        mvprintw(1, 98, "-");
        mvprintw(2, 98, "-");
        mvprintw(3, 98, "-");
        mvprintw(4, 98, "- - - - - - - - ");
        mvprintw(3, 112, "-");
        mvprintw(2, 112, "-");
        mvprintw(1, 112, "-");
        mvprintw(0, 112, "-");
	mvprintw(0, 112, "- - - - - - - -");
        mvprintw(1, 112, "-");
        mvprintw(2, 112, "-");
        mvprintw(3, 112, "-");
        mvprintw(4, 112, "- - - - - - - - ");
        mvprintw(3, 126, "-");
        mvprintw(2, 126, "-");
        mvprintw(1, 126, "-");
        mvprintw(0, 126, "-");
	mvprintw(0, 126, "- - - - - - - -");
        mvprintw(1, 126, "-");
        mvprintw(2, 126, "-");
        mvprintw(3, 126, "-");
        mvprintw(4, 126, "- - - - - - - - ");
        mvprintw(3, 140, "-");
        mvprintw(2, 140, "-");
        mvprintw(1, 140, "-");
        mvprintw(0, 140, "-");
	mvprintw(4, 0, "- - - - - - - -");
	mvprintw(5, 0, "-");
	mvprintw(6, 0, "-");
	mvprintw(7, 0, "-");
	mvprintw(8, 0, "- - - - - - - -");
	mvprintw(7, 14, "-");
	mvprintw(6, 14, "-");
	mvprintw(5, 14, "-");
	mvprintw(4, 14, "- - - - - - - -");
	mvprintw(5, 14, "-");
	mvprintw(6, 14, "-");
	mvprintw(7, 14, "-");
	mvprintw(8, 14, "- - - - - - - - ");
	mvprintw(7, 28, "-");
	mvprintw(6, 28, "-");
	mvprintw(5, 28, "-");
	mvprintw(4, 28, "-");
	mvprintw(4, 28 ,"- - - - - - - -");
        mvprintw(5, 28, "-");
        mvprintw(6, 28, "-");
        mvprintw(7, 28, "-");
        mvprintw(8, 28, "- - - - - - - -");
        mvprintw(7, 42, "-");
        mvprintw(6, 42, "-");
        mvprintw(5, 42, "-");
        mvprintw(4, 42, "- - - - - - - -");
        mvprintw(5, 42, "-");
        mvprintw(6, 42, "-");
        mvprintw(7, 42, "-");
        mvprintw(8, 42, "- - - - - - - - ");
        mvprintw(7, 56, "-");
        mvprintw(6, 56, "-");
        mvprintw(5, 56, "-");
        mvprintw(4, 56, "-");
	mvprintw(4, 56, "- - - - - - - -");
        mvprintw(5, 56, "-");
        mvprintw(6, 56, "-");
        mvprintw(7, 56, "-");
        mvprintw(8, 56, "- - - - - - - - ");
        mvprintw(7, 70, "-");
        mvprintw(6, 70, "-");
        mvprintw(5, 70, "-");
        mvprintw(4, 70, "-");
	mvprintw(4, 70, "- - - - - - - -");
        mvprintw(5, 70, "-");
        mvprintw(6, 70, "-");
        mvprintw(7, 70, "-");
        mvprintw(8, 70, "- - - - - - - - ");
        mvprintw(7, 84, "-");
        mvprintw(6, 84, "-");
        mvprintw(5, 84, "-");
        mvprintw(4, 84, "-");
	mvprintw(4, 84, "- - - - - - - -");
        mvprintw(5, 84, "-");
        mvprintw(6, 84, "-");
        mvprintw(7, 84, "-");
        mvprintw(8, 84, "- - - - - - - - ");
        mvprintw(7, 98, "-");
        mvprintw(6, 98, "-");
        mvprintw(5, 98, "-");
        mvprintw(4, 98, "-");
	mvprintw(4, 98, "- - - - - - - -");
        mvprintw(5, 98, "-");
        mvprintw(6, 98, "-");
        mvprintw(7, 98, "-");
        mvprintw(8, 98, "- - - - - - - - ");
        mvprintw(7, 112, "-");
        mvprintw(6, 112, "-");
        mvprintw(5, 112, "-");
        mvprintw(4, 112, "-");
	mvprintw(4, 112, "- - - - - - - -");
        mvprintw(5, 112, "-");
        mvprintw(6, 112, "-");
        mvprintw(7, 112, "-");
        mvprintw(8, 112, "- - - - - - - - ");
        mvprintw(7, 126, "-");
        mvprintw(6, 126, "-");
        mvprintw(5, 126, "-");
        mvprintw(4, 126, "-");
	mvprintw(4, 126, "- - - - - - - -");
        mvprintw(5, 126, "-");
        mvprintw(6, 126, "-");
        mvprintw(7, 126, "-");
        mvprintw(8, 126, "- - - - - - - - ");
        mvprintw(7, 140, "-");
        mvprintw(6, 140, "-");
        mvprintw(5, 140, "-");
        mvprintw(4, 140, "-");
	mvprintw(8, 0, "- - - - - - - -");
	mvprintw(9, 0, "-");
	mvprintw(10, 0, "-");
	mvprintw(11, 0, "-");
	mvprintw(12, 0, "- - - - - - - -");
	mvprintw(11, 14, "-");
	mvprintw(10, 14, "-");
	mvprintw(9, 14, "-");
	mvprintw(8, 14, "- - - - - - - -");
	mvprintw(9, 14, "-");
	mvprintw(10, 14, "-");
	mvprintw(11, 14, "-");
	mvprintw(12, 14, "- - - - - - - - ");
	mvprintw(11, 28, "-");
	mvprintw(10, 28, "-");
	mvprintw(9, 28, "-");
	mvprintw(8, 28, "-");
	mvprintw(8, 28 ,"- - - - - - - -");
        mvprintw(9, 28, "-");
        mvprintw(10, 28, "-");
        mvprintw(11, 28, "-");
        mvprintw(12, 28, "- - - - - - - -");
        mvprintw(11, 42, "-");
        mvprintw(10, 42, "-");
        mvprintw(9, 42, "-");
        mvprintw(8, 42, "- - - - - - - -");
        mvprintw(9, 42, "-");
        mvprintw(10, 42, "-");
        mvprintw(11, 42, "-");
        mvprintw(12, 42, "- - - - - - - - ");
        mvprintw(11, 56, "-");
        mvprintw(10, 56, "-");
        mvprintw(9, 56, "-");
        mvprintw(8, 56, "-");
	mvprintw(8, 56, "- - - - - - - -");
        mvprintw(9, 56, "-");
        mvprintw(10, 56, "-");
        mvprintw(11, 56, "-");
        mvprintw(12, 56, "- - - - - - - - ");
        mvprintw(11, 70, "-");
        mvprintw(10, 70, "-");
        mvprintw(9, 70, "-");
        mvprintw(8, 70, "-");
	mvprintw(8, 70, "- - - - - - - -");
        mvprintw(9, 70, "-");
        mvprintw(10, 70, "-");
        mvprintw(11, 70, "-");
        mvprintw(12, 70, "- - - - - - - - ");
        mvprintw(11, 84, "-");
        mvprintw(10, 84, "-");
        mvprintw(9, 84, "-");
        mvprintw(8, 84, "-");
	mvprintw(8, 84, "- - - - - - - -");
        mvprintw(9, 84, "-");
        mvprintw(10, 84, "-");
        mvprintw(11, 84, "-");
        mvprintw(12, 84, "- - - - - - - - ");
        mvprintw(11, 98, "-");
        mvprintw(10, 98, "-");
        mvprintw(9, 98, "-");
        mvprintw(8, 98, "-");
	mvprintw(8, 98, "- - - - - - - -");
        mvprintw(9, 98, "-");
        mvprintw(10, 98, "-");
        mvprintw(11, 98, "-");
        mvprintw(12, 98, "- - - - - - - - ");
        mvprintw(11, 112, "-");
        mvprintw(10, 112, "-");
        mvprintw(9, 112, "-");
        mvprintw(8, 112, "-");
	mvprintw(8, 112, "- - - - - - - -");
        mvprintw(9, 112, "-");
        mvprintw(10, 112, "-");
        mvprintw(11, 112, "-");
        mvprintw(12, 112, "- - - - - - - - ");
        mvprintw(11, 126, "-");
        mvprintw(10, 126, "-");
        mvprintw(9, 126, "-");
        mvprintw(8, 126, "-");
	mvprintw(8, 126, "- - - - - - - -");
        mvprintw(9, 126, "-");
        mvprintw(10, 126, "-");
        mvprintw(11, 126, "-");
        mvprintw(12, 126, "- - - - - - - - ");
        mvprintw(11, 140, "-");
        mvprintw(10, 140, "-");
        mvprintw(9, 140, "-");
        mvprintw(8, 140, "-");
	mvprintw(35, 64, "##");
//	mvprintw(36, 64, "##");
	mvprintw(39, 0, "SCORE: 0 ");
	mvprintw(39, 130,"LIVES: 3 ");
	start_color();
	init_pair(1,COLOR_WHITE, COLOR_BLACK);
	bkgd(COLOR_PAIR(1));
}
int main() {
	drawbricks();
	curs_set(0);
	int x = 0, y = 0, c;
	int max_y = 0, max_x = 0;
	int next_x = 0;
	int next_y = 0;
	int speed1 = 1, speed2 = 1;
	int pos = 0;
	int p = max_x - 80;
        int q = max_y - 8;
	initscr();
	noecho();
	curs_set(0);
	getmaxyx(stdscr, max_y, max_x);
	while(1) {
                int c = getch();
                if(c == 'x') {
                clear();
		drawbricks();
                mvprintw(36, x, "**********");
                refresh();
                usleep(DELAY);
                x++;
                }
                else if(c == 'z') {
                x--;
                clear();
		drawbricks();
                mvprintw(36, x, "**********");
                refresh();
                usleep(DELAY);
                }

                else {
                        clear();
			drawbricks();
                        mvprintw(36, x, "**********");
                        refresh();
                        usleep(DELAY);

                }
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
		
	endwin();
	}
}
        
	
/* x = x + direction
	if ( hits a side)
		flag = 1
	if( hits a side again)
		flag = 2
*/
// function to move the slider.


