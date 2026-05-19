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
		DrawRectangle(this->PosX - width / 2, PosY, width, length, YELLOW);
		std::cout << "Draw" << std::endl;
	}
}

void Laser::move() {
	this->PosY += speed * direction;
	if (this->PosY < 0 || this->PosY > GetScreenHeight()) {
		isActive = false;
	}
}

Laser::~Laser(){

}