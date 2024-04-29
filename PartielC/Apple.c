#include <SDL.h>
#include <stdbool.h>
#include "apple.h"
#include "MainValues.h"

SDL_Rect apple;

void generate_new_apple_pos(void);

void render_apple(SDL_Renderer* renderer)
{
    SDL_SetRenderDrawColor(renderer, 226, 106, 106, SDL_ALPHA_OPAQUE);
    SDL_RenderFillRect(renderer, &apple);
}

void generate_new_apple_pos(void)
{
    apple.x = (rand() % (winX - 0 + 1));
    apple.y = (rand() % (winY - DEFAULT_APPLE_HEIGHT + 1));
    apple.w = DEFAULT_APPLE_WIDTH;
    apple.h = DEFAULT_APPLE_HEIGHT;
}

int get_apple_posX(void)
{
    return apple.x;
}
int get_apple_posY(void)
{
    return apple.y;
}