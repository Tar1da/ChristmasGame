#pragma once

void Input() 
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a': dir = LEFT; break;
		case 'd': dir = RIGHT; break;
		case ' ': dir = PAUSE; break; 
		case 'e': play_on = false;
		}
	}
}