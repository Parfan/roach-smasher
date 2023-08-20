#pragma once

#include <vector>
#include <raylib.h>
#include "SpriteGroup.h"

class SpriteGroup;

class Sprite {
	public:
		Sprite(int posX, int posY, float scale, const char* texturePath);
		void addToGroup(SpriteGroup* group);
		virtual void update() const;
		virtual void draw() const;
		void kill();

	protected:
		Vector2 _pos;
		float _scale;
		Texture2D _texture;
		std::vector<SpriteGroup*> _groups;

		void removeFromGroups();
};