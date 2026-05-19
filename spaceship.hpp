#pragma once

#include "raylib.h"
#include "laser.hpp"
#include <vector>

class Spaceship {
private:
	float lastLaserShootTime = 0;
	float shootingSpeed = 0.2;
	int sizeX = 100;
	int sizeY = 100;
	float drawScale = 0.6f;
	float drawWidth = 100 * drawScale;
	float drawHeight = 100 * drawScale;
	float speed = 7.0;
	float PosX = 0;
	float PosY = 0;
	Texture2D ship;
	std::vector<Laser> lasers;
public:
	Spaceship();

	void Draw() const;
	void moveShipLeft();
	void moveShipRight();
	void shootLaser();
	void deleteInactiveLaser();
	void DrawLasers() const;
	void UpdateLaserPos();

	~Spaceship();
};