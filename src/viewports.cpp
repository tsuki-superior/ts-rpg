#include "../include/viewports.hpp"

namespace viewports
{
	SDL_Rect top_left = {0, 0, WIDTH / 2, HEIGHT / 2};
	SDL_Rect top_right = {WIDTH / 2, 0, WIDTH / 2, HEIGHT / 2};
	SDL_Rect bottom = {0, HEIGHT / 2, WIDTH, HEIGHT / 2};
	SDL_Rect top = {0, 0, WIDTH, HEIGHT / 2};
	SDL_Rect bottom_left = {0, HEIGHT / 2, WIDTH / 2, HEIGHT / 2};
	SDL_Rect bottom_right = {WIDTH / 2, HEIGHT / 2, WIDTH / 2, HEIGHT / 2};
} // namespace viewports

void renderToViewport(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect rect)
{
	SDL_RenderSetViewport(renderer, &rect);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
}
