#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
bool game_on = true;
bool play_on = true;
enum menuEnum {PLAY, RULES, EXIT};
menuEnum change = PLAY;
enum eDirection {STOP, LEFT, RIGHT, PAUSE};
eDirection dir = STOP;
int score;
int hearts;

#include "Item.h"
#include "Functions.h"
#include "Menu.h"
#include "Setup.h"
#include "Draw.h"
#include "Input.h"
#include "Logic.h"

void game() {
	while (play_on)
	{
		Draw();
		if (hearts != 0) {
			Input();
			Logic();
		}
		else {
			play_on = false;
			cout << "Игра окончена" << endl;
		}
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	Setup();

	while(game_on){
		menu();
		game();
	}

	return 0;
}