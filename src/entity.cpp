#include "../include/entity.hpp"

Entity::Entity(Image pImage, Vector2f pos, int p_w, int p_h)
:image(pImage)
{
	renderRect.x = pos.getX();
	renderRect.y = pos.getY();
	renderRect.w = p_w;
	renderRect.h = p_h;
}

void Entity::render(SDL_Renderer *gRenderer)
{
	SDL_RenderCopy(gRenderer, image.getTexture(), NULL, &renderRect);
}
