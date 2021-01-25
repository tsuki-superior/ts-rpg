#include "include/engine.hpp"
#include "include/image.hpp"
#include "include/viewports.hpp"

int main()
{
	Engine engine;
	SDL_Event event;
	
	Image red(engine.renderer, "media/images/red.png");
	Image materia(engine.renderer, "media/images/materia.png");
	Image material1(engine.renderer, "media/images/material1.png");
	Image dragon(engine.renderer, "media/images/dragon.png");

	while(running)
	{
		engine.update(event);
		
		renderToViewport(engine.renderer, red.texture, viewports::top_left);
		renderToViewport(engine.renderer, materia.texture, viewports::top_right);
		renderToViewport(engine.renderer, material1.texture, viewports::bottom_left);
		renderToViewport(engine.renderer, dragon.texture, viewports::bottom_right);

		SDL_RenderPresent(engine.renderer);
	}

	return 0;
}
