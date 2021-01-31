#include "include/engine.hpp"

int main()
{
	Engine engine;
	SDL_Event event;
	
	Image red(engine.renderer, "media/images/red.png");
	Image materia(engine.renderer, "media/images/materia.png");
	Image material1(engine.renderer, "media/images/material1.png");
	Image dragon(engine.renderer, "media/images/dragon.png");

	float x = 100;
	float y = 50;

	SDL_SetRenderDrawColor(engine.renderer, 255, 255, 255, 255);

	
	while(running)
	{
		engine.update(event);
		
		SDL_RenderClear(engine.renderer);
		
		Engine::Entity entity1(red, Vector2f(x, y), Size(200, 150));
		
		entity1.render(engine.renderer);
		
		// renderToViewport(engine.renderer, red.getTexture(), viewports::top_left);
		// renderToViewport(engine.renderer, materia.getTexture(), viewports::top_right);
		// renderToViewport(engine.renderer, material1.getTexture(), viewports::bottom_left);
		// renderToViewport(engine.renderer, dragon.getTexture(), viewports::bottom_right);
		
		SDL_RenderPresent(engine.renderer);
	}

	return 0;
}
