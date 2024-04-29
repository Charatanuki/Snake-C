#pragma once

#include <SDL.h>


// Init functions
int initSDL();
SDL_Renderer* createRenderer(SDL_Window* window);
void freeAll(SDL_Window* window, SDL_Renderer* renderer);