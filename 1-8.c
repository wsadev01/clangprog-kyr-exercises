#include <stdio.h>

int main() {
  int bc = 0;
  int tc = 0;
  int nlc = 0;
  int ch;
  while ((ch = getchar()) != EOF) {
    if (ch == ' ') {
      ++bc;
    } else if (ch == '\t') {
      ++tc;
    } else if (ch == '\n') {
      ++nlc;
    }
  }
  printf("Se insertaron %d espacios blancos\n", bc);
  printf("Se insertaron %d tabulaciones\n", tc);
  printf("Se insertaron %d nuevas lineas\n", nlc);
  return 0;
}
