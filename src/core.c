#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "core.h"
#include "gfx.h"

//test

Sprite* heroSprite;
// end: test

void initResources()
{
	mainGameWindow = NULL; 
	SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_PNG);
	initGamePreferences();

	mainGameWindow = SDL_CreateWindow("Roguelike by Ania & Lukasz",
										SDL_WINDOWPOS_UNDEFINED,
										SDL_WINDOWPOS_UNDEFINED,
										gamePreferences.windowWidth,
										gamePreferences.windowHeight,
										gamePreferences.windowFlags);

	initBackgroundColor();
	heroSprite = initSprite("assets/images/sprites/hero.png");
	gamePreferences.running = true;
}

void cleanup()
{
	destroySprite(heroSprite);
	SDL_DestroyWindow(mainGameWindow);
	IMG_Quit();
	SDL_Quit();
}

void initGamePreferences()
{
	gamePreferences.windowWidth  = 800;
	gamePreferences.windowHeight = 600;
	gamePreferences.windowFlags  = SDL_WINDOW_RESIZABLE;
}

void handleEvents()
{
	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		if(event.type == SDL_WINDOWEVENT)
		{
			switch(event.window.event)
			{
				case SDL_WINDOWEVENT_CLOSE:
					gamePreferences.running = 0;
					break;
			}
		}
	}
}

void render()
{
	// test
	renderSprite(heroSprite);
	// end: test
	SDL_UpdateWindowSurface(mainGameWindow);
}