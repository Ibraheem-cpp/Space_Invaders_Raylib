#include <iostream>
#include "raylib.h"
#include "game.hpp"
#include "laser.hpp"

int main()
{
    const int width = 750;
    const int height = 700;

    InitWindow(width, height, "Space Invaders");
    SetTargetFPS(60);
    Game game;
    Laser laser(300, 300, 1);

    while (!WindowShouldClose()) {

        game.checkInput();
        laser.move();

        BeginDrawing();
        ClearBackground(BLACK);
        game.Draw();
        laser.Draw();
        EndDrawing();
    }

    
    CloseWindow();


    return 0;
}
