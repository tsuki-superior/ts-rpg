#include "include/Engine.hpp"
#include "image/Image.hpp"

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
			SDL_RenderClear(engine.renderer); // Clearing the buffer of the engine's renderer
			SDL_RenderCopy(engine.renderer, sampleTexture, NULL, NULL); // Pushing the image to the renderer
			SDL_RenderPresent(engine.renderer); // Rendering to the screen

		}

	}
	
	engine.quit(); // Cleaning the engine up
	utils::Log("Cleaned up");

	return 0;
}
