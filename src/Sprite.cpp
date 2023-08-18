#include <raylib.h>

class Sprite {
	public:
		Sprite(int posX, int posY, float scale, const char *texturePath) {
			_texturePath = texturePath;
			_texture = LoadTexture(_texturePath);
			_pos.x = posX;
			_pos.y = posY;
			_scale = scale;
		}

		void draw() {
			DrawTextureEx(_texture, Vector2{_pos.x, _pos.y}, 0, _scale, RAYWHITE);
		}

	private:
		Vector2 _pos;
		float _scale;
		const char* _texturePath;
		Texture2D _texture;
};