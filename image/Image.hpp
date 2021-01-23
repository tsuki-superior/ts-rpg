#pragma once

#ifndef IMAGE_HPP
#define IMAGE_HPP

#include "../include/Engine.hpp"

class Image
{
public:
	SDL_Texture *loadFromFile(SDL_Renderer *gRenderer, std::string path);
};

#endif
