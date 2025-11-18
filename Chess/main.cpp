#include <iostream>
#include "raylib.h"
#include "ChessModel.h"

int main()
{
    ChessModel model = ChessModel();
    model.InitChessModel();

    for (size_t i = 0; i < 64; i++)
    {
        std::cout << model.GetPosition(i) << " ";

        if ((i + 1) % 8 == 0) 
            std::cout << "\n";
    }
    std::cout << std::endl;

	/*std::cout << "Hello world!" << std::endl;
    InitWindow(800, 600, "Raylib !");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello!", 10, 10, 20, BLACK);
        EndDrawing();
    }*/
}
