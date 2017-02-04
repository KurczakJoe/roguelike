#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "gfx.h"
#include "core.h"

void initBackgroundColor()
{
	SDL_Surface* windowBackgroundSurface = SDL_GetWindowSurface(mainGameWindow);
	Uint32 backgroundColor = SDL_MapRGB(windowBackgroundSurface->format, 0,0,0);
	SDL_FillRect(windowBackgroundSurface, &windowBackgroundSurface->clip_rect, backgroundColor);
	windowBackgroundSurface = NULL;
}

Sprite* initSprite(char* path)
{
	Sprite* s = (Sprite*)malloc(sizeof(Sprite));
	s->surface = IMG_Load(path);
	s->x = 0;
	s->y = 0;
	return s;
}

void renderSprite(Sprite* s)
{
	SDL_Surface* windowSurface = SDL_GetWindowSurface(mainGameWindow);
	SDL_Rect rect;
	rect.x = s->x;
	rect.y = s->y;
	
	SDL_BlitSurface(s->surface, NULL, windowSurface, &rect);
}

void destroySprite(Sprite* s)
{
	SDL_FreeSurface(s->surface);
	free(s);
}