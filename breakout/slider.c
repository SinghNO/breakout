#include"main.h"

//function to initialize the slider.
void initslider(game *g) {
	g->s = (slider *)malloc(sizeof(slider));
	g->s->x = g->column/2 - 5;
	g->s->y = 3 * g->row / 4;
	g->s->columns = 10;
}

//function to print the slider.
void printslider(game *g) {
	mvprintw(g->s->y, g->s->x, "**********");
	}

//function to move the slider.
void moveslider(game *g ,char ch) {
	  switch(ch) {
		case 'x':
			 g->s->x++;
			break; 
			
		case 'z':
			g->s->x--;
			break;

		default:break;
	}
}

