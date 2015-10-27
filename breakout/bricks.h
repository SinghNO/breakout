typedef struct bricks {
	int x, y, life, state, width;
	}bricks;

void initbrick(game *g);
void printbrick(game *g);
//void deletebrick(game *g);
//void isobstacle(game *g);
void destroybrick(game *g, int k);
int brickindex(game *g);

