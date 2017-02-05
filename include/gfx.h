#ifndef GFX_H
#define GFX_H

typedef struct Sprite
{
	int x;
	int y;
	int w;
	int h;
	SDL_Surface* surface;
} Sprite;

void    setBackgroundColor();
Sprite* initSprite(char* path);
void    renderSprite(Sprite* s);
void    destroySprite(Sprite* s);

#endif