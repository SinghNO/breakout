typedef struct ball {
	int x, y, speed, life, state, direcx, direcy;
	}ball;
void initball(game *g);
void printball(game *g);
void moveball(game *g);

