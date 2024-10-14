#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    int ball_x = 100;
    int ball_y = 100;
    int ball_speed_x = 5;
    int ball_speed_y = 5;
    int ball_radius = 15;

    cout << "Hello World" << endl;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (WindowShouldClose() == false){
   
        ball_x += ball_speed_x;
        ball_y += ball_speed_y;

        if(ball_x + ball_radius >= SCREEN_WIDTH || ball_x - ball_radius <= 0)
        {
            ball_speed_x *= -1;
        }

        if(ball_y + ball_radius >= SCREEN_HEIGHT || ball_y - ball_radius <= 0)
        {
            ball_speed_y *= -1;
        }
        
        BeginDrawing();
            ClearBackground(BLACK);
            DrawCircle(ball_x,ball_y,ball_radius, WHITE);
        EndDrawing();
    }

    CloseWindow();
}