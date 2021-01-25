#pragma once
#include "engine.hpp"

class Image
{
public:
	Image(SDL_Renderer *gRenderer, std::string path);
	//Load a file into this object
	void loadFromFile(SDL_Renderer *gRenderer, std::string path);
	
	SDL_Texture *texture;

private:
	//The width of the image
	uint16_t width;
	//The height of the image
	uint16_t height;
};
