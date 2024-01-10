#pragma once

void Draw()
{ 
	system("cls");

	cout << " " << "SCORE: " << score << "\t" << "HEARTS: " << hearts << "\t" << R"(Выйти("E"))" << endl;

	cout << field.border << field.border << field.border << endl;

	for (int k = 0; k <= field.HEIGHT; k++) {
		for (int n = 0; n <= (field.WIDTH * 2); n+=15){
			if (k == board.y && n == board.x){
				cout << board.vew;;
			}
			if ((k == box.y) && (n == box.x)) {
				cout << box.vew[0];
			} 
			else{
				bool print = false;
				for (int m = 1; m <= size(box.tailX); m++) {
					if (box.tailX[m - 1] == n && box.tailY[m - 1] == k) {
						print = true;
						cout << box.vew[m];
					}
				}
				if (!print)
					cout << field.empty;
			}
		} 
		cout << endl;
	}

	cout << field.border << field.border << field.border << endl;
}