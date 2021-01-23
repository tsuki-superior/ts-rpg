#include "../include/Engine.hpp"

bool running = true;

bool Engine::init(SDL_Window *window = NULL, SDL_Renderer *renderer = NULL)
{
	bool success = true;

	if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		utils::Log("Failed to initialize SDL2", true);
		success = false;
	}	
	else if(!(IMG_Init(IMG_INIT_PNG) &IMG_INIT_PNG) || !(IMG_Init(IMG_INIT_JPG) &IMG_INIT_JPG))
	{
		utils::Log("Failed to initialize SDL_img", true);
	}
	else
	{
		utils::Log("Initialized SDL2");
		utils::Log("Initialized SDL2_img");
		window = SDL_CreateWindow("Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_RESIZABLE);
		if(window == NULL)
		{
			utils::Log("Failed to create window", true);
		}
		else
		{
			utils::Log("Created window");
			renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
			if(renderer == NULL)
			{
				utils::Log("Failed to create renderer", true);
			}
			else{
				utils::Log("Created renderer");
			}
		}
	}

	return success;
}

void Engine::quit(SDL_Window *window, SDL_Renderer *renderer)
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void Engine::update(SDL_Event e)
{
	while(SDL_PollEvent(&e) != 0)
	{
		if(e.type == SDL_QUIT)
		{
			running = false;
		}
	}
}

