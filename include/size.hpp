#pragma once
#include <iostream>

class Size
{
public:
	Size(float p_w, float p_h);
	float getW();
	float getH();

private:
	float w;
	float h;
};
