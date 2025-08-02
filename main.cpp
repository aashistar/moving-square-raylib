#include<raylib.h>

int main() {
	// parameters
	int length = 800;
	int width = 800;
	int Swidth = 50;
	int Slength = 50;
	float SX = 380;
	float SY = 380;
	// Window preperation
	InitWindow(width, length, "Move the Square");
	SetTargetFPS(60);
	Color bgcolor = BLACK;
	// main loop
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(bgcolor);
		DrawRectangle(SX, SY, Swidth, Slength, RED);
		DrawRectangle(0, 0, 10, 800, BLUE);
		DrawRectangle(790, 0, 10, 800, BLUE);
		DrawRectangle(0, 790, 800, 10, BLUE);
		DrawRectangle(0, 0, 800, 10, BLUE);

		if (IsKeyDown(KEY_DOWN) || ((SY - Slength / 2.0) + 10 < 0)) {
			SY += 2;
		}
		if (IsKeyDown(KEY_UP) || ((SY + Slength) + 10 >= length)) {
			SY -= 2;
		}
		if (IsKeyDown(KEY_LEFT) || ((SX + Swidth) + 10 >= width)) {
			SX -= 2;
		}
		if (IsKeyDown(KEY_RIGHT) || ((SX - Swidth / 2.0) + 10 < 0)) {
			SX += 2;
		}
		EndDrawing();
	}
}
