#include <iostream>
#include "raylib.h"

int main()
{
    const int width = 750;
    const int height = 700;

    InitWindow(width, height, "Space Invaders");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        
        BeginDrawing();
        ClearBackground(BLACK);
        DrawCircle(width / 2, height / 2, 20.0, RED);

        EndDrawing();
    }

    CloseWindow();

}
