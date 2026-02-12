/* clock.c */


#include <stdio.h>
#include <time.h>
#include <raylib.h>


#define WINDOW_HEIGHT 600
#define WINDOW_WIDTH 600

int main () {

  // Temps compter avec la date 01/01/1970 a Minuit pour le début:
  time_t now = time(NULL);
  printf("time = %ld\n", now);

  // en format calendar:
  char *now_en_str = ctime(&now);
  printf("time en calendar = %s\n", now_en_str);

  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "My CLock App!");

  while(!WindowShouldClose()) {

    BeginDrawing();
    ClearBackground(BLACK);

    // dessiner le cercle:
    //DrawCircle(int centerX, int centerY, float radius, Color color);
    DrawCircle(WINDOW_WIDTH/2, WINDOW_HEIGHT/2, WINDOW_HEIGHT*0.4, RAYWHITE);

//    DrawText("Congrats! you created your first window!", 190, 200, 20, SKYBLUE);
    EndDrawing();
  }
  CloseWindow();




  return 0;
}

