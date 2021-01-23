#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

#define WIDTH 800
#define HEIGHT 600

extern bool running;
extern bool DEBUG;

namespace utils
{
	inline void Log(std::string message, bool is_error = false)
	{
		if(is_error)
		{
			std::cout << "[LOGGER] " << message << ", " << SDL_GetError() << std::endl;
		}
		else
		{
			std::cout << "[LOGGER] " << message << std::endl;
		}	
	}
}

class Engine
{
public:
	bool init(SDL_Window *window, SDL_Renderer *renderer);
	void quit(SDL_Window *window, SDL_Renderer *renderer);
	void update(SDL_Event e);
};
