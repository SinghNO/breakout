#include"main.h"

//function to initialize the bricks.
void initbrick(game *g) {
	g->br = (bricks*)malloc(sizeof(bricks) * g->count_bricks);
	int i;
       	int x = 4, y = 0;
        for(i = 0;i < g->count_bricks; i++) {
		start_color();
		g->br[i].y = y;
		g->br[i].life = 1;
                g->br[i].x = x;
                g->br[i].state =1;
		g->br[i].width = g->column / 10 + 1;
                x = x + g->column / 10 + 1 ;
                if(x > 134) {
                        x = 4;
                        y = y + 3;
                }
        }
	for(i = 0;i < 9; i++) {
		g->br[i].life = 3;
	}
	for(i = 9; i < 18; i++) {
		g->br[i].life = 2;
	}
	for(i = 18; i < 27; i++) {
		g->br[i].life = 1;
	}
}

//function to print the bricks.
void printbrick(game *g) {
	int i;
	for(i = 0; i < g->count_bricks; i++) {
		if(g->br[i].life == 3) {
			attron(COLOR_PAIR(RED_BLACK));
		}
		if(g->br[i].life == 2) {
			attron(COLOR_PAIR(GREEN_BLACK));
		}
		if(g->br[i].life == 1) {
			attron(COLOR_PAIR(BLUE_BLACK));
		}
		 if(g->br[i].life) {
			if(g->br[i].width == 15) {
                		mvaddstr(g->br[i].y, g->br[i].x, "* * * * * * * *");
                		mvaddstr(g->br[i].y + 1, g->br[i].x, "*             *");
                		mvaddstr(g->br[i].y + 2, g->br[i].x, "*             *");
                		mvaddstr(g->br[i].y + 3, g->br[i].x, "* * * * * * * *");
        		if(g->br[i].width == 9) {
                		mvaddstr(g->br[i].y, g->br[i].x, "* * * * *");
                		mvaddstr(g->br[i].y + 1, g->br[i].x, "*       *");
                		mvaddstr(g->br[i].y + 2, g->br[i].x, "*       *");
                		mvaddstr(g->br[i].y + 3, g->br[i].x, "* * * * *");
			}
			}		
       
		}
		attroff(COLOR_PAIR(RED_BLACK));
		attroff(COLOR_PAIR(GREEN_BLACK));
		attroff(COLOR_PAIR(BLUE_BLACK));
	
	}
}	
int brickindex(game *g) {
	int next_xcor;
	int next_ycor;
	int xcor;
	int ycor, k = 0;
	next_xcor = g->b->x + g->b->direcx;
	next_ycor = g->b->y + g->b->direcy;
	while(k < g->count_bricks) {
		xcor = g->br[k].x;
		ycor = g->br[k].y;
		if(next_xcor >= xcor&& next_xcor <= xcor + 14) {
			if(next_ycor >= ycor && next_ycor <= ycor + 4) {
				destroybrick(g, k);
				return 1;
				break;
			}
		}
		k++;
	}
	return 0;
}

void destroybrick(game *g, int k) {
	int count = 1;
	if(g->br[k].life == 1) {
		k++;
		while(k < g->count_bricks) {
			g->br[k - 1] = g->br[k];
			k++;
			count++;
		}
		g->count_bricks--;
		if(g->level == 1) {
			g-> points = g->points + 5;
		}
		if(g->level == 2) {
			g->points = g->points + 10;
		}
		if(g->level == 3) {
			g->points = g->points + 15;
		}
	}
	else
		g->br[k].life--;
	if(g->br[k].state == 2) {
		g->b->speed *= 1.5;
	}

}	
int printscore(game *g) {
	mvaddstr(38, 0, "score :");
	refresh();
	mvprintw(38, 10, "%d ", g->points);
	refresh();
	if(g->level == 1 && g->points == 135) {
		mvprintw(21, 64, "CONGRATULATIONS WELCOME TO NEXT LEVEL");
		refresh();
		napms(3000);
		g->level = 2;
		startgame(g);
		g->exit = 1;
	}
	else if(g->level == 2 && g->points == 270) {
		g->exit = 1;
	}
	else if(g->level == 3 && g->points == 405) {
		g->exit = 1;
	}
	
	return 0;
	}
int printlives(game *g) {
	mvaddstr(38, 135, "lives:");
	refresh();
	mvprintw(38, 141, "%d ", g->lives);
	refresh();
	if(g->lives == 0) {
	
		mvprintw(21, 64, "GAME OVER");
		refresh();
		napms(3000);		//usleep(5000);
		g->exit = 1;
	}
		//napms(5000);
		//usleep(2000);	
	return 0;
	}

	
