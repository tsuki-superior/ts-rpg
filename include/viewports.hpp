#pragma once
#include "engine.hpp"

namespace viewports
{
	extern SDL_Rect top_left;
	extern SDL_Rect top_right;
	extern SDL_Rect top;
	extern SDL_Rect bottom;
	extern SDL_Rect bottom_right;
	extern SDL_Rect bottom_left;
}

void renderToViewport(SDL_Renderer *renderer, SDL_Texture *texture, SDL_Rect rect);

