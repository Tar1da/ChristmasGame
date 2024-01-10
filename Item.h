#pragma once

const char* stars = { "\033[31m  ***********  \033[0m" };
const char* bow = {"\033[32m   #### ####   \033[0m"};

struct Field
{
	const char* border = "\033[94m###############\033[0m";
	const char* empty = "               ";
	const int WIDTH = 15;
	const int HEIGHT = 30;
}
field;

struct BOARD
{
	const char* vew = "\033[32m===============\033[0m";
	int x = field.WIDTH;
	const int y = field.HEIGHT - 1;
}
board;

struct Item
{
	const char* vew[5] = {stars, stars, stars, bow, bow};
	int tailX[4];
	int tailY[4];
	int x = 0;
	int y = 0;
}
box;