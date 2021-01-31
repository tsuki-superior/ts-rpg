#ifndef __SIZE_HPP__
#define __SIZE_HPP__

#include <iostream>

class Size
{
public:
	Size(float p_w, float p_h);

	const int &w = back_w;
	const int &h = back_h;

private:
	float back_w;
	float back_h;
};

#endif
