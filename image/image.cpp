#include "Image.hpp"

SDL_Texture *Image::loadFromFile(SDL_Renderer *gRenderer, std::string path){
    
	SDL_Texture *new_texture = NULL;
    SDL_Surface *loaded_surface = IMG_Load(path.c_str());
    
	if(loaded_surface == NULL){
        utils::Log("Unable to load image", true);
    }
    
	else{
        new_texture = SDL_CreateTextureFromSurface(gRenderer, loaded_surface);
        if(new_texture == NULL){
            utils::Log("Unable to create texture", true);
        }
        SDL_FreeSurface(loaded_surface);
    }

    return new_texture;
}
