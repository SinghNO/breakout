#include"main.h"
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
void printbrick(game *g) {
	int i;
	for(i = 0; i < g->count_bricks; i++) {
		 if(g->br[i].life) {
		if(g->br[i].width == 15) {
                mvaddstr(g->br[i].y, g->br[i].x, "- - - - - - - -");
                mvaddstr(g->br[i].y + 1, g->br[i].x, "-             -");
                mvaddstr(g->br[i].y + 2, g->br[i].x, "-             -");
                mvaddstr(g->br[i].y + 3, g->br[i].x, "- - - - - - - -");
        }
	if(g->br[i].width == 9) {
                mvaddstr(g->br[i].y, g->br[i].x, "- - - - -");
                mvaddstr(g->br[i].y + 1, g->br[i].x, "-       -");
                mvaddstr(g->br[i].y + 2, g->br[i].x, "-       -");
                mvaddstr(g->br[i].y + 3, g->br[i].x, "- - - - -");
	
	}
	}
       
	}
}