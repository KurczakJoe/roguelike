#include <SDL2/SDL.h>
#include "core.h"
#include "gfx.h"

void initResources()
{
	mainGameWindow = NULL; 
	SDL_Init(SDL_INIT_EVERYTHING);

	initGamePreferences();

	mainGameWindow = SDL_CreateWindow("Roguelike by Ania & Lukasz",
										SDL_WINDOWPOS_UNDEFINED,
										SDL_WINDOWPOS_UNDEFINED,
										gamePreferences.windowWidth,
										gamePreferences.windowHeight,
										gamePreferences.windowFlags);

	initBackgroundColor();
}

void cleanup()
{
	SDL_DestroyWindow(mainGameWindow);
	SDL_Quit();
}

void initGamePreferences()
{
	gamePreferences.windowWidth  = 800;
	gamePreferences.windowHeight = 600;
	gamePreferences.windowFlags  = SDL_WINDOW_RESIZABLE;
}

void render()
{
	SDL_UpdateWindowSurface(mainGameWindow);
}