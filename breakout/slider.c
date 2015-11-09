#include"main.h"

//function to initialize the slider.
void initslider(game *g) {
	g->s = (slider *)malloc(sizeof(slider));
	g->s->x = g->column / 2 - 5;
	g->s->y = 3 * g->row / 4;
	if(g->level == 1) {
		g->s->columns = 15;
	}
	else if(g->level == 2) {
		g->s->columns = 10;
	}
	else if(g->level == 3) {
		g->s->columns = 8;
	}
}

//function to print the slider.
void printslider(game *g) {
	if(g->level == 1) {
		mvprintw(g->s->y, g->s->x, "***************");
	}
	else if(g->level == 2) {
		mvprintw(g->s->y, g->s->x, "**********");
	}
	else if(g->level == 3) {
		mvprintw(g->s->y, g->s->x, "********");
	}
}

//function to move the slider.
void moveslider(game *g ,int ch) {
	  switch(ch) {
		case KEY_RIGHT:
			g->s->x += 2;
			break; 
			
		case KEY_LEFT:
			g->s->x -= 2;
			break;

		default:
			break;
	}
}

