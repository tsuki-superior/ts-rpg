#pragma once
#include "image.hpp"
#include "vector2f.hpp"

class Entity
{
public:
	Entity(Image pImage, Vector2f pos, int p_w, int p_h);
	void render(SDL_Renderer *gRenderer);

private:
	Image image;
	SDL_Rect renderRect;
};
