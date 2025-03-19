/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute 'raylib_compile_execute' script
*   Note that compiled executable is placed in the same folder as .c file
*
*   To test the examples on Web, press F6 and execute 'raylib_compile_execute_web' script
*   Web version of the program is generated in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*

M4T2 - Raylib
norrisa
3/19/25

We'll need to:
- Decide on a screen size 
- Decide what we're repeating (rectangle, png, etc.)
- Create a loop to draw a ROW of them
- Create a nested loop to draw a GRID (rows and columns) of them

    Color colors[MAX_COLORS_COUNT] = {
        DARKGRAY, MAROON, ORANGE, DARKGREEN, DARKBLUE, DARKPURPLE, DARKBROWN,
        GRAY, RED, GOLD, LIME, BLUE, VIOLET, BROWN, LIGHTGRAY, PINK, YELLOW,
        GREEN, SKYBLUE, PURPLE, BEIGE };

********************************************************************************************/

#include "raylib.h"

// Draw one critter
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, Color color1, Color color2); 
void DrawPlanet(int r_x, int r_y, int tile_widthr, int tile_heightr, Color color1r, Color color2r);
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;
    // The item I'm drawing
    int tile_width = 80;
    int tile_height = 60;
    Color color1 = PURPLE;
    Color color2 = YELLOW;
    int c_x = 0;
    int c_y = 0;               // current location of critter
    
    //background
    int tile_widthr = 80;
    int tile_heightr = 60;
    Color color1r = BLUE;
    Color color2r = DARKBLUE;
    int r_x = 0;
    int r_y = 0;   
    InitWindow(screenWidth, screenHeight, "m4t2 - raylib example");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        c_x += 2;
        c_y += 1;
        r_y += 1;
        r_x += 1;
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);
           
            // Draw our critter 
            DrawCritter(c_x, c_y, tile_width, tile_height, color1, color2);
        for (int colume=0; colume<screenHeight; colume += tile_height * 2){
 DrawPlanet(r_x, r_y, tile_widthr, tile_heightr, color1r, color2r);
        }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

// Other function definitions here
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, Color color1, Color color2) {
            // draw the body
            DrawRectangle(c_x, c_y, tile_width, tile_height, color1);
            // place the eyes
            int left_x = c_x + (tile_width / 4);        // 1/4 across
            int left_y = c_y + 10;
            int right_x = c_x + (3 * tile_width / 4);    // 3/4 across
            int right_y = c_y + 10;
            int midr = c_x + (4 * tile_width / 8);        // 1/4 across
            int midl = c_y + 35;
            
            DrawRectangle(left_x, left_y, 10, 10, color2);
            DrawRectangle(right_x, right_y, 10, 10, color2);
            DrawRectangle(midr,midl, 10, 10, color2);

}
void DrawPlanet(int r_x, int r_y, int tile_widthr, int tile_heightr, Color color1r, Color color2r) {
            // draw the body
            DrawEllipse(r_x, r_y, tile_widthr, tile_heightr, color1r);
            // place the eyes
            int left_xr = r_x + (tile_widthr / 400);        // 1/4 across
            int left_yr = r_y + 2;
            int right_xr = r_x + (3 * tile_widthr / 4);    // 3/4 across
            int right_yr = r_y + 2;
            DrawEllipse(left_xr, left_yr, 10, 10, color2r);
            DrawEllipse(right_xr, right_yr, 10, 10, color2r);
            
}