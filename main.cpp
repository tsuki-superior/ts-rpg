#include "include/Engine.hpp"
#include "image/Image.hpp"

namespace viewports
{
	SDL_Rect top_left = {0, 0, WIDTH / 2, HEIGHT / 2};
	SDL_Rect top_right = {WIDTH / 2, 0, WIDTH / 2, HEIGHT / 2};
	SDL_Rect bottom = {0, HEIGHT / 2, WIDTH, HEIGHT / 2};
	SDL_Rect top = {0, 0, WIDTH, HEIGHT / 2};
}

int main()
{
	Engine engine; // Declaring the engine
	Image image; // Declaring an image
	Image image2;
	Image image3;

	if(engine.init()) // Initializing the engine
	{
		SDL_Texture *imageTexture = image.loadFromFile(engine.renderer, "red.png"); // Loading an image
		SDL_Texture *image2Texture = image2.loadFromFile(engine.renderer, "materia.png");
		SDL_Texture *image3Texture = image3.loadFromFile(engine.renderer, "material1.png");

		SDL_Event event; // An SDL event for capturing things like closing the window, etc.
		while(running)
		{
			engine.update(event); // Updating the engine
			
			SDL_SetRenderDrawColor(engine.renderer, 255, 255, 255, 255);
			SDL_RenderClear(engine.renderer); // Clearing the buffer of the engine's renderer
			
			SDL_RenderSetViewport(engine.renderer, &viewports::top_left);
			SDL_RenderCopy(engine.renderer, imageTexture, NULL, NULL); // Pushing the image to the renderer
			
			SDL_RenderSetViewport(engine.renderer, &viewports::top_right);
			SDL_RenderCopy(engine.renderer, image2Texture, NULL, NULL);
			
			SDL_RenderSetViewport(engine.renderer, &viewports::bottom);
			SDL_RenderCopy(engine.renderer, image3Texture, NULL, NULL);

			SDL_RenderPresent(engine.renderer); // Rendering to the screen

		}

	}
	
	engine.quit(); // Cleaning the engine up
	utils::Log("Cleaned up");

	return 0;
}
