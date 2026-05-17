#include <iostream>
#include "raylib.h"
#include "spaceship.hpp"

Spaceship::Spaceship() {
	ship = LoadTexture("Graphics/spaceship.png");
	int screenWidth = GetScreenWidth();
	int screenHeight = GetScreenHeight();
	PosX = screenWidth / 2.0 - (sizeX * drawScale) / 2.0;
	PosY = screenHeight - (sizeY * drawScale);
}

void Spaceship::Draw() const {
	DrawTextureEx(ship, { PosX, PosY }, 0, drawScale, WHITE);
}

void Spaceship::moveShipLeft() {
	PosX -= speed;
	if (PosX < 0) {
		PosX = 0;
	}
}

void Spaceship::moveShipRight() {
	PosX += speed;
	if (PosX + drawWidth > GetScreenWidth()) {
		PosX = GetScreenWidth() - drawWidth;
	}
}


Spaceship::~Spaceship() {
	UnloadTexture(ship);
}