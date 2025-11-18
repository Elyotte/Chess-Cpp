#include <iostream>
#include "raylib\include\raylib.h"

int main()
{
	std::cout << "Hello world!" << std::endl;
    InitWindow(800, 600, "Raylib !");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello!", 10, 10, 20, BLACK);
        EndDrawing();
    }
}
