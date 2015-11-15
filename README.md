#breakout
#an interesting game.
the game works in maximized form of your screen.
The game has three levels: easy, medium, difficult.
The game also has the save game and load game feature.
The bricks are coloured with three different colours.
The colours indicate the state/life of the bricks.
The bricks with colour blue have life 1.
The bricks with colour green have life 2.
The bricks with colour green have life 3.
This means that the brick of life 1 will be destroyed when the ball hits the brick once.
There is higher probability of more bricks to be destroyed when the ball hits the brick on the left edge or on the right edge.
There is variation in the score according to the level.
There are 5 points for each brick in level one.
There are 10 points for each brick in level two.
There are 15 points for each brick in level three.
# The special feature of the game is that ONCE you save the game the game will operate in auto save mode.
Now coming to the making part of the game.
The game has different structures forthe ball, the slider, the bricks, the game itself.
The ball has x, y, speed, life, state, direcx, direcy as the components in its data structure.
x denotes the x co-ordinate of the ball.
y denotes the y co-ordinate of the ball.
life denotes the life i.e. a ball has 3 lives.
direcx denotes the x direction of the travelling ball.
direcy denotes the y direction of the travelling ball.
initball(); function is to initialize the ball.
printball(); function is to print the ball.
moveball(); function is to move the ball along the screen.
The slider has x, y, columns and speed as the components of the data structure.
x denotes the +xdirection movement of the slider.
y denotes the -xdiecrtion movement of the slider.
columns denote length of the slider.
speed denotes the speed of the slider.
similarly,initslider(); is there to initialize the slider.
printslider(); is there to print the slider.
moveslider(); is there to move the slider.
Now coming to the data structure for the bricks.
it has x, y, life, state, width, color as its components of the data structure.
x denotes the x co-ordinates of the bricks.
y denotes the y- co-ordinates of the bricks.
life denotes the life of the bricks as we have already discussed about this.
state denotes the state of the brick whether the brick is destroyed or not.
width denotes the width of the bricks.
color in which i have given three different colours which also indicate the state of the brick.
initbrick(); is also there to initialize the bricks.
printbricks(); is there to print the bricks.
brickindx(); is an important function of the game which stores the index of the brick to be destroyed.
destroybricks(); takes the index as the argument and deleteds that brick from the array of bricks.
printscore(); is to print the score achieved.
printlives(); is to show the number of lives remaining.
now coming to the most importan part of the game that is the structure of the game itself.
there is a structure known as game.
it, as int exit, row, column, score, level; ball *b, bricks *br, slider *s, int count_bricks, int points, int lives;
The exit is to indicate the exit signal when exit signal is 1 the game ends.
the row, column, score, level indicates the components as the name suggests.
The count_bricks indicates the number of bricks at any instant.
Again points indicates the score.
and lives indicates the lives in the game.
There is also a pointer variable ball *b, slider *s, bricks *br, which are being allocated memory in their respective .c files
The functions used here are as follows:
initgame(); is to initialize the whole game.
startgame(); is to start the game.
screenupdate(); is to keep the screen updated with the present co-ordinates and the movement of the ball.
savegame(); is to save the game .
loadgame(); is to load the game.
Three more structures are used here.
They are record, recordball and recordslider.
record stores all the integral co-ordinates of the game including the bricks.
recordball stores all the information related to the movement of the ball.
recordslider stores all the information relates to the slider.
In the savegame(); funtion i have used fwrite to write all the structures mentioned in the above three lines.
In the loadgame(); function i have used fread to  read all the structure which have been written in a file by the save game function.
This was all about the data structures used in the game and how they were implemented using different functions.
