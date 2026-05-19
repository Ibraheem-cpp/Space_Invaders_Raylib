#include <iostream>
#include "raylib.h"
#include "game.hpp"

int main()
{
    const int width = 750;
    const int height = 700;

    InitWindow(width, height, "Space Invaders");
    SetTargetFPS(60);
    Game game;
    

    while (!WindowShouldClose()) {
        
        game.checkInput();
        
        game.Update();
        

        BeginDrawing();
        ClearBackground(BLACK);
        game.Draw();
        
        EndDrawing();
    }

    
    CloseWindow();


    return 0;
}
