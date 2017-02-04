#include <SDL2/SDL.h>
#include "core.h"

int main()
{
	initResources();
	
	while(gamePreferences.running)
	{
		handleEvents();
		render();	
	}

	cleanup();	
	
	return 0;
}