#pragma once
#include <SDL.h>

typedef struct {
    SDL_Rect position;
} Tail;

void initTails(Tail tail[], int dx, int dy, int tailInt);
void drawTails(Tail tail[], int tailLengh, SDL_Renderer* renderer);