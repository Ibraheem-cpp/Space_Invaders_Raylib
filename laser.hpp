#pragma once

class Laser {
private:
	int PosX = 0;
	int PosY = 0;
	int width = 4;
	int length = 15;
	int speed = 5;
	int direction = 1;
	bool isActive = true;
public:
	Laser(int PosX, int PosY, int direction);

	void Draw() const;
	void move();

	~Laser();
};