#pragma once

#include "Sprite.h"

class Roach : public Sprite {
	public:
		Roach(int posX, int posY);
		void update() const override;
		void draw() const override;
};