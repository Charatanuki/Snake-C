#pragma once
#include <SDL.h>

typedef struct {
	int dx;
	int dy;
	int pX;
	int pY;
	int pSize;
} Player;

enum direction { LEFT, RIGHT, UP, DOWN };

void initPlayer(Player* player);
void collisions(Player* player);