#include <iostream>
#include "game.hpp"
#include "raylib.h"

Game::Game() {
	bgTexture = LoadTexture("Graphics/background.png");
}

void Game::Draw() {
	DrawTexture(bgTexture, 0, 0, WHITE);
	spaceship.Draw();
	spaceship.DrawLasers();
}

void Game::checkInput() {
	if (IsKeyDown(KEY_D)) {
		spaceship.moveShipRight();
	}
	if (IsKeyDown(KEY_A)) {
		spaceship.moveShipLeft();
	}
	if (IsKeyDown(KEY_SPACE)) {
		spaceship.shootLaser();
	}
}

void Game::Update() {
	spaceship.UpdateLaserPos();

	spaceship.deleteInactiveLaser();
}

Game::~Game() {
	UnloadTexture(bgTexture);
}