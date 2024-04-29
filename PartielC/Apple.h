#pragma once
static const int DEFAULT_APPLE_WIDTH = 50;
static const int DEFAULT_APPLE_HEIGHT = 50;

void render_apple(SDL_Renderer* renderer);
void generate_new_apple_pos(void);

int get_apple_posX(void);
int get_apple_posY(void);