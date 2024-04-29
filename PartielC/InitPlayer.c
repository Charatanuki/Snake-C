#include "PlayerValues.h"
#include "MainValues.h"


void initPlayer(Player* player)
{
    player->pX = winX / 2;
    player->pY = winY / 2;
    player->pSize = 50;
    player->dx = 0;
    player->dy = 0;
    player->tailLenght = 0;
}