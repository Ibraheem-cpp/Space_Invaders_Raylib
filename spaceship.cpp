#include <iostream>
#include "raylib.h"
#include "spaceship.hpp"

Spaceship::Spaceship() {
	texture = LoadTexture("Graphics/spaceship.png");
}

void Spaceship::Draw() {
	int screenWidth = GetScreenWidth();
	int screenHeight = GetScreenHeight();
	float PosX = screenWidth / 2 - (sizeX * drawScale) / 2;
	float PosY = screenHeight - (sizeY * drawScale);
	DrawTextureEx(texture, { PosX, PosY }, 0, drawScale, WHITE);
}


Spaceship::~Spaceship() {
	UnloadTexture(texture);
}