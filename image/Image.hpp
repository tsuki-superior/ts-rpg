#pragma once
#include "../include/Engine.hpp"

class Image
{
public:
	SDL_Texture *loadFromFile(SDL_Renderer *gRenderer, std::string path);
};
