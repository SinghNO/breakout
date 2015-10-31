#include "main.h"
void initmenu(game *new) {
	int menu_ret = 1, menu_ret2 = 1;
	char alts[][100] = { {"NEW GAME"},{"LEVELS"},{"QUIT"}}; /* hold the entries. */
	char alts2[][100] = {{"LEVEL 1"},{"LEVEL 2"},{"LEVEL 3"},{"RETURN BACK TO MAIN MENU"},};
	setlocale (LC_CTYPE, "");
	initscr(); 
	noecho(); 
	keypad (stdscr, TRUE); 
	meta (stdscr, TRUE); 
	nodelay (stdscr, FALSE); 
	notimeout (stdscr, TRUE);
	raw();
	curs_set (0);
	mvprintw(23, 36, "INSTRUCTIONS");
	mvprintw(24, 36, "press x to move the slider towards right.");
	mvprintw(25, 36, "press z to move the slider towards left.");
	mvprintw(26, 36, "press p to exit the game");
	mvprintw(27, 36, "ENJOY");
	refresh();
	do { /* menu_ret is sent as the start value, to make the last entry */
		/* highlighted when you return to the main menu. */
		menu_ret = print_menu (2, 5, 3, 15," WELCOME TO BREAKOUT MAIN MENU", alts, menu_ret);
		if (menu_ret == 3) { 
			endwin();
			exit(0);		
		}
		else if (menu_ret == 2) { /* menu will show up without erasing */
			do  {/* the main menu. */
				menu_ret2 = print_menu (6, 22, 4, 15," PLEASE SELECT THE LEVEL", alts2, 1);
		}	
		while (menu_ret2 != 4);
		mvprintw(23, 36, "INSTRUCTIONS");
		mvprintw(24, 36, "press x to move the slider towards right.");
		mvprintw(25, 36, "press z to move the slider towards left.");
		mvprintw(26, 36, "press p to exit the game");
		mvprintw(27, 36, "ENJOY");
		refresh();
	}
	erase();
	mvprintw(23, 36, "INSTRUCTIONS");
	mvprintw(24, 36, "press x to move the slider towards right.");
	mvprintw(25, 36, "press z to move the slider towards left.");
	mvprintw(26, 36, "press p to exit the game");
	mvprintw(27, 36, "ENJOY");
	refresh(); /* When you return from the SELECT SLOT menu, */
	} /* everything will be erased and MAIN MENU will be */
	while (menu_ret != 1); /* reprinted. */
}
int print_menu (int sty, int x, int alts, int width,char title[], char entries[][100], int start) {
/* "i" will be used for printing out a character several times
in a row by using for-loops. Later it will also be used
to point to elements in "temparray" in order to assign some
spaces after the currently selected word, so that the
entire menu cell will be highlighted. */
/* "j" will be used once by a for-loop when "i" is used elsewhere. */
/* "k" is used to point to the different "entries" strings. */
/* "blankspace1" and 2 are used for formatting the strings
in the menu cells. */
/* "currow" contains the currently highlighted row in the menu. */
/* "y" will be used to move the cursor in the y-axis. */
/* "key" will hold the keycode of the last key you pressed,
in order to later compare it for different actions. */
/* "temparray" will as previously stated contain the currently
selected word in order to highlight it. */
	int i, j, k, blankspace1, blankspace2, currow = start, y = sty, key;
	char temparray[100];
	if (n_chars (title) + 2 > width) /* "width" cannot be less than */
		width = n_chars (title) + 2; /* the width of the strings */
		/* plus some space. First */
	for (k = 0; k < alts; k++) { /* entries. */
		if (n_chars (&entries[k][0]) + 2 > width)
			width = n_chars (&entries[k][0]) + 2;
	}
	k = 0;
	move (y++, x);
	addch (ACS_ULCORNER); /* Here the program starts to */
	/* print the frame of the menu. */
	for (i = 0; i < width; i++) /* ULCORNER is upper left corner, */
		addch (ACS_HLINE); /* HLINE is horizontal line. */
	addch (ACS_URCORNER);
	printw ("\n");
	move (y++, x);
	if ((width - n_chars (title)) % 2 != 0) { /* perfectly center the */
		blankspace2 = (width - n_chars (title) + 1) / 2;
		blankspace1 = blankspace2 - 1; /* menu title, it will be */
	} /* placed slightly left. */
	else {
		blankspace1 = (width - n_chars (title)) / 2;
		blankspace2 = blankspace1;
	}
	addch (ACS_VLINE);
	for (i = 0; i < blankspace1; i++)
		printw (" ");
	printw ("%s", title);
	for (i = 0; i < blankspace2; i++)
		printw (" ");
	addch (ACS_VLINE);
	printw ("\n");
	move (y++, x);
	addch (ACS_LTEE); /* LTEE is a left tilted 'T'-like */
	/* shape used to connect lines to the */
	for (i = 0; i < width; i++) /* right of, above and underneath it. */
		addch (ACS_HLINE);
	addch (ACS_RTEE);
	printw ("\n");
	move (y++, x);
	for (j = 0; j < alts - 1; j++) { /* except the last entry for the */
		addch (ACS_VLINE); /* menu. */
		printw (" %s", &entries[k][0]);
		blankspace1 = width - (n_chars (&entries[k][0]) + 1);
		/* The blankspace is after the */
		for (i = 0; i < blankspace1; i++)
			printw(" "); /* string, since the strings */
			/* will be left fixated. */
		k++;
		addch (ACS_VLINE);
		printw ("\n");
		move (y++, x);
		addch (ACS_LTEE);
		for (i = 0; i < width; i++)
			addch (ACS_HLINE);
		addch (ACS_RTEE);
		printw ("\n");
		move (y++, x);
	}
	addch (ACS_VLINE);
	printw (" %s", &entries[k][0]);
	blankspace1 = width - (n_chars (&entries[k][0]) + 1);
	for (i = 0; i < blankspace1; i++)
		printw(" ");
	k++;
	addch (ACS_VLINE);
	printw ("\n");
	move (y++, x);
	addch (ACS_LLCORNER); /* The last menu entry is outside the */
	/* loop because the lower corners are */
	for (i = 0; i < width; i++) /* different. This last entry uses */
		addch (ACS_HLINE); /* regular box corners to fulfill the */
	/* menu. */
	addch (ACS_LRCORNER);
	printw ("\n");
	do { /* select an entry in the menu. */
		attron (A_STANDOUT); /* This highlights the current row. */
		blankspace1 = width - (n_chars (&entries[currow - 1][0]) + 1);
		temparray[0] = ' '; /* Also the blankspace after the */
		str_cp (&temparray[1], &entries[currow - 1][0]);
		/* string will be highlighted. */
		for (i = n_chars (&entries[currow - 1][0]) + 1; i < width; i++) {
			temparray[i] = ' ';
		}	
		temparray[i] = '\0'; /* The highlighted entry will be */
		mvprintw ((sty + 3) + (currow - 1) * 2, x + 1, "%s", temparray);
		attroff (A_STANDOUT); /* printed over the corresponding */
		key = getch(); /* non-highlighted entry. */
		if (key == KEY_UP) {
			mvprintw ((sty + 3) + (currow - 1) * 2, x + 1, "%s", temparray); /* non-highlighted */
		/* entry over the */
			if (currow == 1) /* highlighted one */
				currow = alts;
			else /* Change the currently selected entry */
				currow--; /* according to the direction given by */
		} /* the keypress. Going up from the top */
		/* moves you to the bottom. */
		else if (key == KEY_DOWN) { /* just in the opposite direction. */
			mvprintw ((sty + 3) + (currow - 1) * 2,
			x + 1, "%s", temparray);
			if (currow == alts)
				currow = 1;
			else
				currow++;
		}
	}	
	while (key != '\n' && key != '\r' && key != 459);
	return currow; /* The return is the row-number of the selected */
} /* entry. Can be 1 to "alts" (not 0). */

int n_chars (char *str) {
	int i = 0;
	while (1) { /* is a string terminator. */
		if (*(str + i++) == '\0') /* i increases even if the */
			return --i; /* element is '\0', so i is */
	} /* decreased by one. */
}
	/* Copies string "src" to string "dest" */
void str_cp (char *dest, char *src) {
	int i = 0;
	do { /* element of src is */
		if (*(src + i) != '\0') { /* element of src is */
			*(dest + i) = *(src + i); /* not '\0', copy it to */
			i++; /* the ith element of */
		} /* dest, then increase */
	} /* i by one. */
	while (*(src + i) != '\0');
	*(dest + i) = '\0'; /* Terminate dest by adding '\0' to its */
	/* last element (now dest == src). */
	return;
}