#include <iostream>
#include "game.hpp"
#include "raylib.h"

Game::Game() {
	bgTexture = LoadTexture("Graphics/background.png");
}

void Game::Draw() {
	DrawTexture(bgTexture, 0, 0, WHITE);
	spaceship.Draw();
}

void Game::checkInput() {
	if (IsKeyDown(KEY_D)) {
		spaceship.moveShipRight();
	}
	if (IsKeyDown(KEY_A)) {
		spaceship.moveShipLeft();
	}
}

Game::~Game() {
	UnloadTexture(bgTexture);
}