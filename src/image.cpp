#include <stdint.h>
#include "../include/image.hpp"

Image::Image(SDL_Renderer *gRenderer, std::string path)
{
    loadFromFile(gRenderer,path);
}

void Image::loadFromFile(SDL_Renderer *gRenderer, std::string path)
{
    texture = NULL;

    SDL_Surface *loaded_surface = IMG_Load(path.c_str());

    if (loaded_surface == NULL)
    {
        utils::Log("Unable to load image", true);
    }

    else
    {
        texture = SDL_CreateTextureFromSurface(gRenderer, loaded_surface);
        if (texture == NULL)
        {
            utils::Log("Unable to create texture", true);
        }

        SDL_FreeSurface(loaded_surface);
    }
}
