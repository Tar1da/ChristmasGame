#pragma once

void Setup() 
{
	game_on = true;
	box.x = get_rand(1, 3);
	switch (box.x)
	{
	case 1: box.x = 0; break;
	case 2: box.x = field.WIDTH; break;
	case 3: box.x = field.WIDTH * 2; break;
	}

	score = 0;
	hearts = 3;
}