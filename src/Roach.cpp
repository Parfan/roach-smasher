#include "../include/Roach.h"

Roach::Roach(int posX, int posY)
	: Sprite(posX, posY, 1.0, "./src/assets/img/roach.png") {
	_scale = 0.5;
	_pos.x = posX;
	_pos.y = posY;
	_texture = LoadTexture("./src/assets/img/roach.png");
};

void Roach::update() const {
	_pos.x++;
}

void Roach::draw() const {
	DrawTextureEx(_texture, Vector2{_pos.x, _pos.y}, 0, 1.0, RAYWHITE);
}