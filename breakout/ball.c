#include"main.h"

// function to initialize the ball.
void initball(game *g, int age) {
	g->b = (ball*)malloc(sizeof(ball));
	ball *c;
	c = g->b;
	c-> x = g->column/2 - 5;
	c-> y = g->row/2;
	c-> state = 1;
	c-> life = age;
	c-> speed = 1;
	c-> direcx = 1;
	c-> direcy = 1;
	}

// function to print the ball.

void printball(game *g) {
	mvprintw(g->b->y, g->b->x, "*");
}

//function to move the ball.

void moveball(game *g) {
		int k; 
		ball *t = g->b;
		if((t->x == g->column && t->direcx == 1) || (t->x == 0 && t->direcx == -1)) {
			t->direcx *= -1;
		}
		if((t->x == 136 && t->direcx == 1) || (t->x == 5 && t->direcx == -1)) {
			t->direcx *= -1;
		}
		if(t->y == g->row && t->direcy == 1) {
			--g->lives;
			if(g->lives == 0) {
				g->exit = 1;
			}
			g->s->x = g->column/2 - 5;
			g->s->y = 3 * g->row / 4;
			g->s->columns = 12; 
			napms(1000);
			initball(g, g->lives);
		}
		if(t->y == 0 && t->direcy == -1) {
			t->direcy *= -1;
		}
		if(t->y == g->s->y - 1 && t->direcy == 1) {
			if(g->level == 1) {
				if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 15)
					t->direcy *= -1;
				if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 15)
					t->direcy *= -1;
			}
			if(g->level == 2) {
				if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 10)
					t->direcy *= -1;
				if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 10)
					t->direcy *= -1;
			}
			if(g->level == 3) {
				if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 10)
					t->direcy *= -1;
				if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 10)
					t->direcy *= -1;
			}
		}
		k = brickindex(g);
		if(k) 
			t->direcy *= -1;
		if((t->x == g->column && t->direcx == 1) || (t->x == 0 && t->direcx == -1)) {
			t->direcx *= -1;
		}	 
		if(t->y == 0 && t->direcy == -1) {
			t->direcy *= -1;
		}
		if(t->y == g->s->y - 1 && t->direcy == 1) {
			if(g->level == 1) {
				if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 15)
					t->direcy *= -1;
				if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 15)
					t->direcy *= -1;
			}
			if(g->level == 2) {
				if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 10)
					t->direcy *= -1;
				if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 10)
					t->direcy *= -1;
			}
			if(g->level == 3) {
				if(t->direcx == -1 && t->x > g->s->x && t->x <= g->s->x + 10)
					t->direcy *= -1;
				if(t->direcx == 1 && t->x >= g->s->x && t->x < g->s->x + 10)
					t->direcy *= -1;
			}
		}	
		if((t->x == 136 && t->direcx == 1) || (t->x == 5 && t->direcx == -1)) {
			t->direcx *= -1;
		}
		g->b->x += g->b->direcx;
		g->b->y += g->b->direcy;	
}	

void readball(game *g, FILE *fp) {
	ball *t = g->b;
	fscanf(fp, "%d %d %d %d %d %d", &t->x, &t->y, &t->life, &t->state, &t->direcx, &t->direcy);
}
void writeball(game *g, FILE *fp) {
	ball *t = g->b;
	fprintf(fp, "%d %d %d %d %d %d", t->x, t->y, t->life, t->state, t->direcx, t->direcy);
}

        
