/* clock.c */


#include <stdio.h>
#include <time.h>

int main () {

  // Temps compter avec la date 01/01/1970 a Minuit pour le début:
  time_t now = time(NULL);
  printf("time = %ld\n", now);

  // en format calendar:
  char *now_en_str = ctime(&now);
  printf("time en calendar = %s\n", now_en_str);




  return 0;
}
