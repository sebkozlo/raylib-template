#include "raylib.h"
#include "player.h"

int main(void)
{
    InitWindow(800, 600, "C game template");
    SetTargetFPS(60);

    Player player = CreatePlayer(400, 300);

    while (!WindowShouldClose())
    {
        UpdatePlayer(&player);

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello from Raylib!", 10, 10, 20, DARKGRAY);
        DrawPlayer(player);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
