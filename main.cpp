#include "include/Engine.hpp"
#include "image/Image.hpp"

namespace viewports
{
	SDL_Rect top_left = {0, 0, WIDTH / 2};
	SDL_Rect top_right = {WIDTH / 2, 0, WIDTH / 2, HEIGHT / 2};
	SDL_Rect bottom = {0, HEIGHT / 2, WIDTH, HEIGHT / 2};
	SDL_Rect top = {0, 0, WIDTH, HEIGHT / 2};
}

int main()
{
	Engine engine; // Declaring the engine
	Image image; // Declaring an image

	if(engine.init()) // Initializing the engine
	{
		SDL_Texture *sampleTexture = image.loadFromFile(engine.renderer, "red.png"); // Loading an image
		
		SDL_Event event; // An SDL event for capturing things like closing the window, etc.
		while(running)
		{
			engine.update(event); // Updating the engine
			SDL_SetRenderDrawColor(engine.renderer, 255, 255, 255, 255);
			SDL_RenderClear(engine.renderer); // Clearing the buffer of the engine's renderer
			SDL_RenderSetViewport(engine.renderer, &viewports::top);
			SDL_RenderCopy(engine.renderer, sampleTexture, NULL, NULL); // Pushing the image to the renderer
			SDL_RenderPresent(engine.renderer); // Rendering to the screen

		}

	}
	
	engine.quit(); // Cleaning the engine up
	utils::Log("Cleaned up");

	return 0;
}
