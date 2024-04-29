#include <stdio.h>
#include <SDL.h>
#include "MainValues.h"
#include "FunctionsHeader.h"


int main(int argc, char* argv[]) {
	initSDL();
	SDL_Window* window = SDL_CreateWindow("Snake",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		winX, winY, SDL_WINDOW_SHOWN);


	if (window == NULL) {
		SDL_Quit();
		return -1;
	}


	SDL_Renderer* renderer = createRenderer(window);
	freeAll(window, renderer);

	return 0;
}

