#include <stdio.h>
#include <SDL.h>
#include "PlayerValues.h"
#include "MainValues.h"
#include "Apple.h"

void renderPlayer(SDL_Renderer* renderer, Player* player) {
    SDL_Rect playerRect = { player->pX, player->pY,
        player->pSize, player->pSize };
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
    SDL_RenderFillRect(renderer, &playerRect);

}

void handleMovement(int dir, Player* player) {
    if (dir == LEFT && player->dx != -1) {
        player->dx = -1;
        player->dy = 0;
    }
    else if (dir == RIGHT && player->dx != 1) {
        player->dx = 1;
        player->dy = 0;
    }
    else if (dir == UP && player->dy != -1) {
        player->dx = 0;
        player->dy = -1;
    }
    else if (dir == DOWN && player->dy != 1) {
        player->dx = 0;
        player->dy = 1;
    }
}

void handleKey(Player* player) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym) {
            case(SDLK_UP):
                handleMovement(UP, player);
                break;
            case(SDLK_DOWN):
                handleMovement(DOWN, player);
                break;
            case(SDLK_LEFT):
                handleMovement(LEFT, player);
                break;
            case(SDLK_RIGHT):
                handleMovement(RIGHT, player);
                break;
            }
            break;
        }
    }
}


updatePosPlayer(Player* player) {
    player->pX += player->dx;
    player->pY += player->dy;
    printf("%d", player->pX);
}


void collisions(Player* player) {
    if (abs(player->pX - get_apple_posX()) < 50 && abs(player->pY - get_apple_posY()) < 50) {
        generate_new_apple_pos();
    }
}