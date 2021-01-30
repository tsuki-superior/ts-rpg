#pragma once
#include "vector2f.hpp"
#include "image.hpp"

class Vector2f
{
public:
	Vector2f(float p_x, float p_y);
	
	void print();

	float getX();
	
	float getY();

private:
	float x;
	float y;
};