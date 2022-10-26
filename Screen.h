#pragma once
//SDL Libraries
#include <SDL.h>

//Header Files
#include "Utility.h"

class Screen
{
public:
	//Singleton
	static Screen* Instance();

	//Initialisation
	bool Initialise(const char* gameTitle, int width, int height, int xPos = SDL_WINDOWPOS_CENTERED, int yPos = SDL_WINDOWPOS_CENTERED, bool fullScreen = false);

	//Start and End Frame On Renderer
	void ClearRenderer();
	void PresentRenderer();

	//Close Screen
	void CloseScreen();

	//Getters
	SDL_Renderer* GetRenderer() const;

private:
	//Constructors
	Screen() {};
	Screen(const Screen&);
	Screen& operator=(const Screen&);

	//SDL Variables
	SDL_Window* window{ nullptr };
	SDL_Renderer* renderer{ nullptr };
};