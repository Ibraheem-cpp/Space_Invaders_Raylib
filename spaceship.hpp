#pragma once

class Spaceship {
private:
	int sizeX = 100;
	int sizeY = 100;
	float drawScale = 0.5f;
	float drawWidth = 100 * drawScale;
	float drawHeight = 100 * drawScale;
	Texture2D texture;
public:
	Spaceship();

	void Draw();

	~Spaceship();
};