#include <raylib.h>
#include <vector>
#include "Sprite.cpp"
#include <iostream>

class SpriteGroup {
	public:
		void add(Sprite *sprite) {
			_spriteGroup.push_back(sprite);
		}

		void remove(Sprite *sprite) {
			for (int i = 0; i < _spriteGroup.size(); i++) {
				if (_spriteGroup.at(i) == sprite) {
					_spriteGroup.erase(_spriteGroup.begin() + i);
					break;
				}
			}
		}

		void draw() {
			for (int i = 0; i < _spriteGroup.size(); i++) {
				_spriteGroup.at(i)->draw();
			}
		}

		int size() {
			return _spriteGroup.size();
		}

	private:
		std::vector<Sprite*> _spriteGroup;
};