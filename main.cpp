#include "include/Engine.hpp"
#include "image/Image.hpp"

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;

int main()
{
	Engine engine;
	Image image;

	if(engine.init(window, renderer))
	{
		SDL_Event event;

		while(running)
		{
			engine.update(event);
		}

		image.loadFromFile(renderer, "red.png");
		SDL_RenderPresent(renderer);
	}
	
	engine.quit(window, renderer);
	utils::Log("Cleaned up");

	return 0;
}
