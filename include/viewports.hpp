#ifndef __VIEWPORTS_HPP__
#define __VIEWPORTS_HPP__

#include "engine.hpp"

namespace viewports
{
	extern SDL_Rect top_left;
	extern SDL_Rect top_right;
	extern SDL_Rect top;
	extern SDL_Rect bottom;
	extern SDL_Rect bottom_right;
	extern SDL_Rect bottom_left;
} // namespace viewports

void renderToViewport(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect rect);

#endif