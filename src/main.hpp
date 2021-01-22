#include <SDL2/SDL.h>
#include <iostream>
#include <duktape.h>

using namespace std;

class MainGame
{
public:
    MainGame();
    SDL_Renderer *renderer;
    SDL_Window *window;
protected:
    duk_context *ctx;
}