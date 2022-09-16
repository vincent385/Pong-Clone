#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main (void) {
    // initialize the window and enable vsync.
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Pong");
    SetWindowState(FLAG_VSYNC_HINT);

    // event loop
    while ( !WindowShouldClose() ) {
        BeginDrawing();
            ClearBackground(LIGHTGRAY);



            DrawFPS(SCREEN_WIDTH - 110, 10);
        EndDrawing();
    }

    // close window and return 0 (success)
    CloseWindow();
    return 0;
}
