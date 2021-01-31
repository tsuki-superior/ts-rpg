#ifndef __ENGINE_HPP__
#define __ENGINE_HPP__

#include <iostream>
#include <stdint.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "./point.hpp"
#include "./size.hpp"
#include "./image.hpp"
#include "./viewports.hpp"
#include "./log.hpp"

#define WIDTH 800
#define HEIGHT 600

extern bool running;

class Engine
{
public:
	Engine();
	~Engine();
	SDL_Window *window = NULL;
	SDL_Renderer *renderer = NULL;
	void update(SDL_Event e);

	class Entity
	{
	public:
		Entity(Image pImage, Point pos, Size s);
		void render(SDL_Renderer *renderer);
		int x;
		int y;
		int w;
		int h;

	private:
		Image image;
		SDL_Rect renderRect;
	};

private:
};

#endif
