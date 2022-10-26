#include "Image.h"

bool Image::Load(const std::string fileName)
{
    SDL_Surface* imageData = IMG_Load(fileName.c_str());
    if (!imageData)
    {
        Utility::Log("Image Loading Error!");
        return false;
    }

    tempTexture = SDL_CreateTextureFromSurface(Screen::Instance()->GetRenderer(), imageData);
    if (!tempTexture)
    {
        Utility::Log("Texture Loading Error!");
        return false;
    }

    return true;
}

void Image::Unload()
{
    SDL_DestroyTexture(tempTexture);
}

void Image::SetDimensions(int width, int height)
{

}

void Image::Render()
{
}