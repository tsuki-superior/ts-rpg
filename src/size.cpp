#include "../include/size.hpp"

Size::Size(float p_w, float p_h)
:w(p_w), h(p_h)
{}

float Size::getW()
{
	return w;
}

float Size::getH()
{
	return h;
}
