#pragma once
#include <SDL.h>
#include "Tail.h"

typedef struct {
	int dx;
	int dy;
	int pX;
	int pY;
	int pSize;
	int tailLenght;
} Player;



enum direction { LEFT, RIGHT, UP, DOWN };

void initPlayer(Player* player);
void collisions(Player* player, Tail tail);