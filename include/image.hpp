#ifndef __IMAGE_HPP__
#define __IMAGE_HPP__

#include "./log.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Image
{
public:
	Image();

	Image(SDL_Renderer *gRenderer, std::string path);

	//Load a file into this object
	void loadFromFile(SDL_Renderer *gRenderer, std::string path);

	SDL_Texture *getTexture();

private:
	SDL_Texture *texture;

	//The width of the image
	uint16_t width;

	//The height of the image
	uint16_t height;
};

#endif
