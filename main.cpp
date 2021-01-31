#include "include/engine.hpp"

int main()
{
	Engine engine;

	SDL_Event event;

	Image red(engine.renderer, "media/images/red.png");
	Image materia(engine.renderer, "media/images/materia.png");
	Image material1(engine.renderer, "media/images/material1.png");
	Image dragon(engine.renderer, "media/images/dragon.png");

	int x = 100;
	int y = 50;

	SDL_SetRenderDrawColor(engine.renderer, 255, 255, 255, 255);

	bool mPressed = false;

	while (running)
	{
		engine.update(event);

		while (SDL_PollEvent(&event) != 0)
		{
			if (event.type == SDL_QUIT)
			{
				running = false;
			}
			else if (event.type == SDL_KEYDOWN)
			{
				if (event.key.keysym.sym == SDLK_m)
				{
					mPressed = !mPressed;
				}
			}
		}

		Engine::Entity entity1(red, Point(x, y), Size(200, 150));

		SDL_RenderClear(engine.renderer);
		entity1.render(engine.renderer);

		if (mPressed)
		{
			SDL_GetMouseState(&x, &y);
		}

		// renderToViewport(engine.renderer, red.getTexture(), viewports::top_left);
		// renderToViewport(engine.renderer, materia.getTexture(), viewports::top_right);
		// renderToViewport(engine.renderer, material1.getTexture(), viewports::bottom_left);
		// renderToViewport(engine.renderer, dragon.getTexture(), viewports::bottom_right);

		SDL_RenderPresent(engine.renderer);
	}

	return 0;
}
