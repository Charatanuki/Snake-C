#include <SDL.h>
#include "PlayerValues.h"
#include "Tail.h"


void initTail(Tail* tail, int x, int y, int width,
    int height) 
{
    tail->position.x = x;
    tail->position.y = y;
    tail->position.w = width;
    tail->position.h = height;
}

void initTails(Tail tail[], int dx, int dy, int px, int py, int tailInt) 
{

    int x;
    int y;
    if (dx == 1) {
        x = px - 50;
        y = py;
    }
    else if (dx == -1) {
        x = px + 50;
        y = py;
    }
    else if (dy == -1) {
        x = px;
        y = py + 50;
    }
    else if (dy == 1) {
        x = px;
        y = py - 50;
    }
    int width = 50;
    int height = 50;

    initTail(&tail[tailInt], x, y, width, height);

}

void drawTails(Tail tail[], int tailLengh, SDL_Renderer* renderer) {
    for (int i = 0; i < tailLengh; ++i) {
            SDL_Rect tailRect = { tail[i].position.x,
                tail[i].position.y,
                tail[i].position.w, tail[i].position.h };
                SDL_SetRenderDrawColor(renderer,
                    255, 255, 255, SDL_ALPHA_OPAQUE);
                SDL_RenderFillRect(renderer, &tailRect);
    }
}