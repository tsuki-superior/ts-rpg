#include "../include/vector2f.hpp"
#include <iostream>

Vector2f::Vector2f(float p_x, float p_y)
:x(p_x), y(p_y)
{}

void Vector2f::print()
{
	std::cout << x << ", " << y << std::endl;
}

float Vector2f::getX()
{
	return x;
}

float Vector2f::getY()
{
	return y;
}
