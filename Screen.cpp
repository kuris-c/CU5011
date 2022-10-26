#include "Screen.h"

Screen* Screen::Instance()
{
    static Screen* instance = new Screen();
    return instance;
}

bool Screen::Initialise(const char* gameTitle, int width, int height, int xPos, int yPos, bool fullScreen)
{
    //Initialise SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        Utility::Log("SDL Did Not Intialise Successfully!");
        return false;
    }

    //Create Window
    window = SDL_CreateWindow(gameTitle, xPos, yPos, width, height, static_cast<int>(fullScreen));
    if (!window)
    {
        Utility::Log("Game Window Could Not Be Created!");
        return false;
    }

    //Create Renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer)
    {
        Utility::Log("Game Renderer Could Not Be Created");
        return false;
    }

    return true;
}

void Screen::ClearRenderer()
{
    SDL_RenderClear(renderer);
}

void Screen::PresentRenderer()
{
    SDL_RenderPresent(renderer);
}

void Screen::CloseScreen()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit;
}

SDL_Renderer* Screen::GetRenderer() const
{
    return renderer;
}