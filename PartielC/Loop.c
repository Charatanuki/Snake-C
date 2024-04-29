#include "Loop.h"
#include "PlayerValues.h"
#include "Apple.h"
#include "Tail.h"




int mainLoop(SDL_Renderer* renderer){
    Tail tail[50];
    Player player;
    generate_new_apple_pos();
    initPlayer(&player);
    int tailLenght = 0;

    while (1) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        updatePosPlayer(&player);
        renderPlayer(renderer, &player);
        tailLenght = player.tailLenght;
        drawTails(tail, tailLenght, renderer);
        handleKey(&player);
        render_apple(renderer);
        collisions(&player, *tail);


        SDL_RenderPresent(renderer);
        SDL_Delay(5);
    }
}