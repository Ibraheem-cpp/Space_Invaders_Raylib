#include <iostream>
#include <raylib.h>
#include "laser.hpp"

Laser::Laser(int PosX, int PosY, int direction) {
	this->PosX = PosX;
	this->PosY = PosY;
	isActive = true;
	this->direction = direction;
}

void Laser::Draw() const {
	if (isActive) {
		DrawRectangle(this->PosX - width / 2, PosY - 15, width, length, YELLOW);
	}
}

void Laser::move() {
	this->PosY += speed * direction;
	if (isActive) {
		if (this->PosY < 0 || this->PosY > GetScreenHeight()) {
			isActive = false;
		}
	}
}

bool Laser::Active() const {
	return isActive;
}

Laser::~Laser(){

}