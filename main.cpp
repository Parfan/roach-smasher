#include <list>
#include "raylib.h"
#include "src/SpriteGroup.cpp"

int main(void)
{
	// Initialization
	//--------------------------------------------------------------------------------------
	const int screenWidth = 800;
	const int screenHeight = 600;

	InitWindow(screenWidth, screenHeight, "raylib [textures] example - image drawing");
	SetTargetFPS(60);

	SpriteGroup *spriteGroup = new SpriteGroup();
	//---------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();
			if (IsKeyDown(KEY_RIGHT)) {
				spriteGroup->add(
					new Sprite(0, 0, 1.0, "./src/assets/img/roach.png")
				);
				std::cout << spriteGroup->size() << std::endl;
			}

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