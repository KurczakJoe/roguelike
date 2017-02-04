#ifndef CORE_H
#define CORE_H

SDL_Window* mainGameWindow; 

struct
{
	int windowWidth;
	int windowHeight;
	int windowFlags;

} gamePreferences;

void initResources();
void initGamePreferences();

void render();

void cleanup();

#endif