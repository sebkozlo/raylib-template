#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

typedef struct Player {
    Vector2 position;
    float speed;
} Player;

Player CreatePlayer(float x, float y);
void UpdatePlayer(Player *p);
void DrawPlayer(Player p);

#endif
