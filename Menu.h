#pragma once	
void Input_menu(char key, bool* on);
void file_rules();

void menu() {
	bool menu_on = true;
	while (menu_on) {
		switch(change){
		case PLAY:
			system("cls");
			cout << "������: " << score << endl;
			cout << "\033[107m������\033[0m" << " " << R"(��� ������ ���� ������� ("Y"))" << endl;
			cout << "������� ����" << endl;
			cout << "�����" << endl;
			Input_menu(_getch(), &menu_on);
			break;
		case RULES:
			system("cls");
			cout << "������: " << score << endl;
			cout << "������" << endl;
			cout << "\033[107m������� ����\033[0m" << " " << R"(����� ���������� ������� �������("Y"))" << endl;
			cout << "�����" << endl;
			Input_menu(_getch(), &menu_on);
			break;
		case EXIT:
			system("cls");
			cout << "������: " << score << endl;
			cout << "������" << endl;
			cout << "������� ����" << endl;
			cout << "\033[107m�����\033[0m" << " " << R"(��� ������ ������� ("Y"))" << endl;
			Input_menu(_getch(), &menu_on);
			break;
		}
	}
}

	void Input_menu(char key, bool *menu_on) {
		switch (key)
		{
		case 'W':
		case 'w': if (change == PLAY) change = EXIT; else if (change == EXIT) change = RULES; else if (change == RULES) change = PLAY; break;
		case 'S':
		case 's': if (change == PLAY) change = RULES; else if (change == RULES) change = EXIT; else if (change == EXIT) change = PLAY; break;
		case 'Y': 
		case 'y': 
			if (change == PLAY) *menu_on = false;
			if (change == RULES) {
				system("cls");
				file_rules();
				cout << endl;
				system("pause");
			}
			if (change == EXIT) {
				play_on = false;
				game_on = false;
				*menu_on = false;
			}
			break;
		}
	}

	void file_rules() {
		const char* path = "Rules.txt";
		FILE* Rules;
		int c, len = 0;
		char buf[500];
		
		if (fopen_s(&Rules, path, "r") != NULL)
			cout << "The file cannot be opened";
		else
		{
				while (!feof(Rules)) {
					c = fgetc(Rules);
					if (c == '\n') {
						cout << "\n";
					}
					else
					{
						cout << (char)c;
					}
				}
		}
	}
