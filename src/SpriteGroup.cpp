#include "../include/SpriteGroup.h"
#include "../include/Sprite.h"

void SpriteGroup::add(Sprite* sprite) {
	_sprites.push_back(sprite);
	sprite->addToGroup(this);
	_size++;
}

void SpriteGroup::remove(Sprite* sprite) {
	auto it = std::find(_sprites.begin(), _sprites.end(), sprite);
	if (it != _sprites.end()) {
		_sprites.erase(it);
		_size--;
	}
}

int SpriteGroup::size() {
	return _size;
}

void SpriteGroup::update() {
	for (Sprite* sprite : _sprites) {
		sprite->update();
	}
}

void SpriteGroup::draw() {
	for (Sprite* sprite : _sprites) {
		sprite->draw();
	}
}