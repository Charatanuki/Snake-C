#include "Loop.h"
#include "PlayerValues.h"
#include "Apple.h"




int mainLoop(SDL_Renderer* renderer){
    //initValues();
    Player player;
    generate_new_apple_pos();
    initPlayer(&player);

    while (1) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        updatePosPlayer(&player);
        renderPlayer(renderer, &player);
        handleKey(&player);
        render_apple(renderer);
        collisions(&player);


        SDL_RenderPresent(renderer);
        SDL_Delay(50);
    }
}