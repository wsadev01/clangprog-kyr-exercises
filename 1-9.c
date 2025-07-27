#include <stdio.h>

int main() {
  int ch;
  int bc = 0;
  while ((ch = getchar()) != EOF) {
    if(ch == ' ') {
      if (bc == 0) {
        putchar(' ');
      }
      bc = 1;
    } else {
      bc = 0;
      putchar(ch);
    }
  }
  return 0;
}
