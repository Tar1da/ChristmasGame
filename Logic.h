#pragma once

void Logic(){
	//Logic for present
	int prevX = box.tailX[0];
	int prevY = box.tailY[0];
	int prev2X, prev2Y;
	box.tailX[0] = box.x;
	box.tailY[0] = box.y;
	for (int i = 1; i < size(box.tailX); i++) {
		prev2X = box.tailX[i];
		prev2Y = box.tailY[i];
		box.tailX[i] = prevX;
		box.tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	// Logic for board
	switch (dir) 
	{
	case LEFT: 
		if (board.x != 0) {
			board.x -= field.WIDTH;
			dir = STOP;
		}
		break;
	case RIGHT: 
		if (board.x != field.WIDTH * 2) {
			board.x += field.WIDTH;
			dir = STOP;
		}
		break;
	case PAUSE:
		system("pause");
		dir = STOP;
	}

	// Logic for present
	if (true)
		box.y++;
	
	if ((box.x == board.x) && (box.y == board.y))
	{
		cout << "\a";
		score++;
		get_present_x_y(box.x, box.y);
	}

	if (box.y > field.HEIGHT)
	{
		Beep(500,1000);
		hearts--;
		get_present_x_y(box.x, box.y);
	}
}