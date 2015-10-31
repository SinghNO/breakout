typedef struct bricks {
	int x, y, life, state, width, color;
	}bricks;

void initbrick(game *g);
void printbrick(game *g);
void destroybrick(game *g, int k);
int brickindex(game *g);
int printscore(game *g);
int printlives(game *g);
