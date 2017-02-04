#ifndef CORE_H
#define CORE_H

#define true  1;
#define false 0;

SDL_Window* mainGameWindow; 

struct
{
	int windowWidth;
	int windowHeight;
	int windowFlags;
	int running;

} gamePreferences;

void initResources();
void initGamePreferences();
void handleEvents();
void render();

void cleanup();

#endif