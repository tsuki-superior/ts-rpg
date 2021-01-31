#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <iostream>

class Point
{
public:
	Point(int p_x, int p_y);

	const float &x = back_x;
	const float &y = back_y;

private:
	float back_x;
	float back_y;
};

#endif
