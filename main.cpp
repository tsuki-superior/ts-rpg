#include "include/Engine.hpp"

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;

int main()
{
	Engine engine;

	if(engine.init(window, renderer))
	{
		SDL_Event event;

		while(running)
		{
			engine.update(event);
		}
	}
	
	engine.quit(window, renderer);
	utils::Log("Cleaned up");

	return 0;
}
