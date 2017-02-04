#include <SDL2/SDL.h>
#include "gfx.h"
#include "core.h"

void initBackgroundColor()
{
	SDL_Surface* windowBackgroundSurface = SDL_GetWindowSurface(mainGameWindow);
	Uint32 backgroundColor = SDL_MapRGB(windowBackgroundSurface->format, 0,0,0);
	SDL_FillRect(windowBackgroundSurface, &windowBackgroundSurface->clip_rect, backgroundColor);
	windowBackgroundSurface = NULL;
}