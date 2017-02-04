#include <SDL2/SDL.h>
#include "core.h"

int main()
{
	initResources();
	render();
	SDL_Delay(3000);
	cleanup();	

	
	return 0;
}