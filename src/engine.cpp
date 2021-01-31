#include "../include/engine.hpp"

bool running = true;

Engine::Engine()
{
	bool success = true;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		utils::Log("Failed to initialize SDL2", true);
		success = false;
	}
	else if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG) || !(IMG_Init(IMG_INIT_JPG) & IMG_INIT_JPG))
	{
		utils::Log("Failed to initialize SDL_img", true);
	}
	else
	{
		utils::Log("Initialized SDL2");
		utils::Log("Initialized SDL2_img");
		window = SDL_CreateWindow("Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_RESIZABLE);
		if (window == NULL)
		{
			utils::Log("Failed to create window", true);
		}
		else
		{
			utils::Log("Created window");
			renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
			if (renderer == NULL)
			{
				utils::Log("Failed to create renderer", true);
			}
			else
			{
				utils::Log("Created renderer");
			}
		}
	}
}

Engine::~Engine()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	utils::Log("Cleaned up");
}

void Engine::update(SDL_Event e)
{
	while (SDL_PollEvent(&e) != 0)
	{
		switch (e.type)
		{
		case SDL_QUIT:
			running = false;
			break;
		case SDL_KEYDOWN:
			if (e.key.keysym.sym == SDLK_g)
			{
				utils::Log("G");
			}
			break;
		default:
			break;
		}
	}
}

Engine::Entity::Entity(Image pImage, Point pos, Size s)
{
	image = pImage;
	renderRect.x = pos.x;
	renderRect.y = pos.y;
	renderRect.w = s.w;
	renderRect.h = s.h;
}

void Engine::Entity::render(SDL_Renderer *renderer)
{
	SDL_RenderCopy(renderer, image.getTexture(), NULL, &renderRect);
}
