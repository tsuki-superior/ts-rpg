#pragma once
#include "../include/Engine.hpp"

class Image
{
public:
	SDL_Texture *loadFromFile(SDL_Renderer *renderer, std::string path);
};
