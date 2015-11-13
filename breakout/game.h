typedef struct ball ball;

typedef struct bricks bricks;

typedef struct slider slider;

typedef struct node node;
typedef struct list {
	node *head;
	int count;
}list;
typedef struct game {
	int exit, row, column, score, level;
	ball *b; 
	bricks *br;
	slider *s;
	int count_bricks;
	int points;
	int lives;
	list game;
	}game;

void initgame(game *g);
void startgame(game *g);
void screenupdate(game *g);
void loadgame(game *g, char *name);
void savegame(game *g);
//void insertl(list *l, int i, char *name);
