#include"main.h"

//function to initailize the ball.
void initball(game *g) {
	g->b = (ball*)malloc(sizeof(ball));
	ball *c;
	c = g->b;
	c-> x = g->column/2;
	c-> y = g->row/2;
	c-> state = 1;
	c-> life = 3;
	c-> speed = 1;
	c-> direcx = 1;
	c-> direcy = 1;
	}

//function to print the ball.

void printball(game *g) {
	mvprintw(g->b->y, g->b->x, "#");
}

//function to move the ball.

void moveball(game *g) {
		ball *t = g->b;
		if((t->x == g->column && t->direcx == 1) || (t->x == 0 && t->direcx == -1)) {
			t->direcx *= -1;
		}
		if((t->y == g->row && t->direcy == 1) || (t->y == 0 && t->direcy == -1)) {
			t->direcy *= -1;
		}
		if(t->y == g->s->y - 1 && t->direcy == 1) {
			if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 10)
				t->direcy *= -1;
			if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 10)
				t->direcy *= -1;
		}
		g->b->x += g->b->direcx;
		g->b->y += g->b->direcy;
	
}		
	


