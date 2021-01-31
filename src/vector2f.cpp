#include "../include/vector2f.hpp"
#include <iostream>

Vector2f::Vector2f(int p_x, int p_y)
:x(p_x), y(p_y)
{}

void Vector2f::print()
{
	std::cout << x << ", " << y << std::endl;
}

int Vector2f::getX()
{
	return x;
}

int Vector2f::getY()
{
	return y;
}
