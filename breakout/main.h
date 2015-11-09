#include<ncurses.h>
#include<stdlib.h>
#include <locale.h>
#include"game.h"
#include"ball.h"
#include"bricks.h"
#include"slider.h"
#include"menu.h"
#include"color.h"
int print_menu (int sty, int x, int alts, int width,char title[], char entries[][100], int start);
int n_chars (char *str);
void str_cp (char *dest, char *src);
