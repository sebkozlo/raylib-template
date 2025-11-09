#include "player.h"

Player CreatePlayer(float x, float y) {
    Player p = { {x, y}, 4.0f };
    return p;
}

void UpdatePlayer(Player *p) {
    if (IsKeyDown(KEY_RIGHT)) p->position.x += p->speed;
    if (IsKeyDown(KEY_LEFT))  p->position.x -= p->speed;
    if (IsKeyDown(KEY_UP))    p->position.y -= p->speed;
    if (IsKeyDown(KEY_DOWN))  p->position.y += p->speed;
}

void DrawPlayer(Player p) {
    DrawCircleV(p.position, 20, BLUE);
}
