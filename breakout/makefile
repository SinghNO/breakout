project: main.o game.o ball.o bricks.o slider.o color.o list.o
	cc -Wall main.o game.o ball.o bricks.o slider.o color.o list.o -o project -lncurses 
main.o: main.c main.h
	cc -c -Wall main.c -lncurses
game.o: game.c main.h
	cc -c -Wall game.c -lncurses
ball.o: ball.c main.h
	cc -c -Wall ball.c -lncurses
bricks.o: bricks.c main.h
	cc -c -Wall bricks.c -lncurses
slider.o: slider.c main.h
	cc -c -Wall slider.c -lncurses
color.o : color.c main.h
	cc -c -Wall color.c -lncurses
list.o : list.c main.h
	cc -c -Wall list.c -lncurses
