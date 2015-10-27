#include"main.h"

//function to initialize the bricks.
void initbrick(game *g) {
	g->br = (bricks*)malloc(sizeof(bricks) * g->count_bricks);
	int i;
       	int x = 4, y = 0;
        for(i = 0;i < g->count_bricks; i++) {
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
}

//function to print the bricks.
void printbrick(game *g) {
	int i;
	for(i = 0; i < g->count_bricks; i++) {
		 if(g->br[i].life) {
			if(g->br[i].width == 15) {
                		mvaddstr(g->br[i].y, g->br[i].x, "- - - - - - - -");
                		mvaddstr(g->br[i].y + 1, g->br[i].x, "-             -");
                		mvaddstr(g->br[i].y + 2, g->br[i].x, "-             -");
                		mvaddstr(g->br[i].y + 3, g->br[i].x, "- - - - - - - -");
        		if(g->br[i].width == 9) {
                		mvaddstr(g->br[i].y, g->br[i].x, "- - - - -");
                		mvaddstr(g->br[i].y + 1, g->br[i].x, "-       -");
                		mvaddstr(g->br[i].y + 2, g->br[i].x, "-       -");
                		mvaddstr(g->br[i].y + 3, g->br[i].x, "- - - - -");
			}
			}		
       
		}
	
}
}	
//void deletebrick(game *g) {
//}
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
			if(next_ycor >= ycor && next_ycor <= ycor + 3) {
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
	//mvaddstr(0, 0,"destroybrick called");
	//refresh(); 
	//napms(5000);
	k++;
	while(k < g->count_bricks) {
	//mvaddstr(38, 64, "while loop called");
	//refresh();
	//napms(5000);
		g->br[k - 1] = g->br[k];
		k++;
	}
	g->count_bricks--;
}	
	
