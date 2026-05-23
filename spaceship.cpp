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
	DrawTextureEx(ship, { PosX, PosY - 15 }, 0, drawScale, WHITE);
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

void Spaceship::shootLaser() {
	float currentTime = GetTime();
	if (currentTime - lastLaserShootTime > shootingSpeed) {
		lasers.push_back(Laser(PosX + (drawWidth / 2), PosY, -1));
		lastLaserShootTime = currentTime;
	}
}

void Spaceship::DrawLasers() const {
	for (int i = 0; i < lasers.size(); i++) {
		lasers[i].Draw();
	}
}

void Spaceship::UpdateLaserPos() {
	for (int i = 0; i < lasers.size(); i++) {
		lasers[i].move();
	}
}

void Spaceship::deleteInactiveLaser() {
	for (auto it = lasers.begin(); it != lasers.end();) {
		if (!(it->Active())) {
			it = lasers.erase(it);
		}
		else {
			it++;
		}
	}
}


Spaceship::~Spaceship() {
	UnloadTexture(ship);
}