#include "include/Engine.hpp"

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;

int main()
{
	if(init(window, renderer))
	{
		SDL_Event event;

		while(running)
		{
			update(event);
		}
	}
	
	quit(window, renderer);
	utils::Log("Cleaned up");

	return 0;
}
