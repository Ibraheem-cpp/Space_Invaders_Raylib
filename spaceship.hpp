#pragma once

#include "raylib.h"

class Spaceship {
private:
	int sizeX = 100;
	int sizeY = 100;
	float drawScale = 0.6f;
	float drawWidth = 100 * drawScale;
	float drawHeight = 100 * drawScale;
	float speed = 7.0;
	float PosX = 0;
	float PosY = 0;
	Texture2D ship;
public:
	Spaceship();

	void Draw() const;
	void moveShipLeft();
	void moveShipRight();

	~Spaceship();
};