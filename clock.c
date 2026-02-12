/* clock.c */


#include <stdio.h>
#include <time.h>
#include <raylib.h>
#include <math.h>


#define WINDOW_HEIGHT 600
#define WINDOW_WIDTH 600

// Fonction pour dessiner les crans des minutes:
void DrawMinuteMarkers(Vector2 center, float clockRadius) {
  float alpha_degres = 0;

  for (int i=0; i< 60; i++) {
    float x = center.x + clockRadius * sinf( alpha_degres * DEG2RAD);
    float y = center.y +  clockRadius * cosf( alpha_degres * DEG2RAD);
    alpha_degres += 260 / 60;
    DrawRectangle(x,y,4,4,RED);
  }
}

int main () {

  // Temps compter avec la date 01/01/1970 a Minuit pour le début:
  time_t now = time(NULL);
  printf("time = %ld\n", now);

  // en format calendar:
  char *now_en_str = ctime(&now);
  printf("time en calendar = %s\n", now_en_str);


  // le vector2 pour le centrage:
  Vector2 center;
  center.x = WINDOW_WIDTH/2;
  center.y = WINDOW_HEIGHT/2;

  float clockRadius = WINDOW_HEIGHT*0.4;

  InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "My CLock App!");

  while(!WindowShouldClose()) {

    BeginDrawing();
    ClearBackground(BLACK);

    // dessiner le cercle:
    //DrawCircle(int centerX, int centerY, float radius, Color color);
    DrawCircle(WINDOW_WIDTH/2, WINDOW_HEIGHT/2, clockRadius, RAYWHITE);
    DrawMinuteMarkers(center, clockRadius);

//    DrawText("Congrats! you created your first window!", 190, 200, 20, SKYBLUE);
    EndDrawing();
  }
  CloseWindow();




  return 0;
}

