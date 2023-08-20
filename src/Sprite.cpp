#include "raylib.h"
#include "../include/Sprite.h"
// #include "../include/SpriteGroup.h"

class SpriteGroup;

Sprite::Sprite(int posX, int posY, float scale, const char* texturePath) {
	_pos.x = posX;
	_pos.y = posY;
	_scale = scale;
	// _texture = LoadTexture("./src/assets/img/roach.png");
}

/**
 * Method to update the instance attributes.
 */
void Sprite::update() const {};
/**
 * Method to draw the Sprite in the screen.
 */
void Sprite::draw() const {};
// void Sprite::draw() {
// 	DrawTextureEx(_texture, _pos, 0.0, 0.5, RAYWHITE);
// }

// /**
//  * Remove the instance from all SpriteGroups and destroy it.
//  */
void Sprite::kill() {
	removeFromGroups();
	delete this;
}

void Sprite::addToGroup(SpriteGroup* group) {
	_groups.push_back(group);
}

void Sprite::removeFromGroups() {
	for (SpriteGroup* group : _groups) {
		group->remove(this);
	}
	_groups.clear();
}