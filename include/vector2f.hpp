#pragma once
#include <iostream>

class Vector2f
{
public:
	Vector2f(int p_x, int p_y);
	
	void print();

	int getX();
	
	int getY();

private:
	int x;
	int y;
};
