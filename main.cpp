#include "include/Engine.hpp"
#include "image/Image.hpp"

int main()
{
	Engine engine;
	Image image;

	if(engine.init())
	{
		SDL_Texture *sampleTexture = image.loadFromFile(engine.renderer, "red.png");
		
		SDL_Event event;
	
		while(running)
		{
			engine.update(event);
			SDL_RenderClear(engine.renderer);	
			SDL_RenderCopy(engine.renderer, sampleTexture, NULL, NULL);
			SDL_RenderPresent(engine.renderer);

		}

	}
	
	engine.quit();
	utils::Log("Cleaned up");

	return 0;
}
