#pragma once
#include <iostream>
#include <stdint.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

#include "vector2f.hpp"
#include "size.hpp"
#include "image.hpp"
#include "viewports.hpp"
#include "log.hpp"

#define WIDTH 800
#define HEIGHT 600

extern bool running;

 // namespace utils

class Engine
{
public:
	Engine();
	~Engine();
	bool init();
	void quit();
	void update(SDL_Event e);
	SDL_Window *window = NULL;
	SDL_Renderer *renderer = NULL;
	
	class Entity
	{
	public:
		Entity(Image pImage, Vector2f pos, Size s);
		void render(SDL_Renderer *renderer);
	
	private:
		Image image;
		SDL_Rect renderRect;
	};
private:
};
