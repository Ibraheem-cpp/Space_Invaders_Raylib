#include <iostream>
#include "raylib.h"

int main()
{
    const int width = 750;
    const int height = 700;

    InitWindow(width, height, "Space Invaders");
    SetTargetFPS(60);

    Texture2D spaceship = LoadTexture("Graphics/spaceship.png");

    while (!WindowShouldClose()) {
        
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTexture(spaceship, width / 2 - 50, height / 2 + 250, WHITE);

        EndDrawing();
    }

    UnloadTexture(spaceship);
    CloseWindow();

}
