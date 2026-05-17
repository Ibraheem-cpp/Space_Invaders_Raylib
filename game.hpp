#pragma once

#include "spaceship.hpp"
#include "raylib.h"

class Game {
private:
	Spaceship spaceship;
	Texture2D bgTexture;
public:
	Game();

	void Draw();
	void checkInput();

	~Game();
};