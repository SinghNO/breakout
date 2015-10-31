typedef struct slider {
	int x, y, columns, speed;
	}slider;

void initslider(game *g);
void printslider(game *g);
void moveslider(game *g, int ch);

