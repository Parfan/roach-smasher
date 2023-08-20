#include "raylib.h"
// #include "include/Sprite.h"
#include "include/SpriteGroup.h"
#include "include/Roach.h"

int main(void) {
	// Initialization
	//--------------------------------------------------------------------------------------
	const int screenWidth = 800;
	const int screenHeight = 600;

	InitWindow(screenWidth, screenHeight, "Roach Smasher");
	SetTargetFPS(60);

	SpriteGroup *spriteGroup = new SpriteGroup();
	// Roach *sprite = new Roach(0, 0);//, 0.5, "./src/assets/img/roach.png");
	//---------------------------------------------------------------------------------------

	// Texture2D texture = LoadTexture("./src/assets/img/roach.png");

	// Main game loop
	while (!WindowShouldClose()) { // Detect window close button or ESC key
		// Update
		//----------------------------------------------------------------------------------
		if (IsKeyDown(KEY_RIGHT)) {
			spriteGroup->add(
				new Roach(0, 0)
			);
		}
		spriteGroup->update();

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
			// DrawTextureEx(texture, Vector2{0, 0}, 0.0, 0.5, RAYWHITE);
			spriteGroup->draw();

			ClearBackground(RAYWHITE);
		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------
	// UnloadTexture(texture);       // Texture unloading

	CloseWindow();                // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}