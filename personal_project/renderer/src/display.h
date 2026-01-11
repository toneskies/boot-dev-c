#ifndef DISPLAY_H
#define DISPLAY_H

#include "SDL2/SDL.h"

typedef struct {
    SDL_Renderer *renderer;
    SDL_Window *window;
} App;

void initSDL(void);
void doInput(void);
void prepareScene(void);
void presentScene(void);
void cleanup(void);

#endif