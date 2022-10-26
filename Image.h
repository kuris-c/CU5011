#pragma once
//C++ Libraries
#include <string>

//SDL Libraries
#include <SDL_image.h>

//Header Files
#include "Screen.h"
#include "Vector.h"

class Image
{
public:
	//Constructors
	Image(int width, int height) {};

	//Load and Unload
	bool Load(const std::string fileName);
	void Unload();

	//Getters

	//Setters
	void SetDimensions(int width, int height);

	//Action Functions
	void Render();

private:
	SDL_Texture* tempTexture{ nullptr };
	Vector<int> dimension;
};