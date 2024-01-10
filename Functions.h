#pragma once

template <typename T>
T get_rand(T a, T b) {
	return rand() % (b - a + 1) + a;
}

void get_present_x_y(int &x, int &y) {
	y = 0;
	x = get_rand(1, 3);
	switch (x)
	{
	case 1: x = 0; break;
	case 2: x = field.WIDTH; break;
	case 3: x = field.WIDTH * 2; break;
	}
}