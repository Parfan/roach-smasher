#pragma once

#include <algorithm>
#include <vector>
#include <raylib.h>
#include "Sprite.h"

class Sprite;

class SpriteGroup {
	public:
		void add(Sprite* sprite);
		void remove(Sprite* sprite);
		int size();
		void update();
		void draw();

	protected:
		std::vector<Sprite*> _sprites;
		int _size;
};