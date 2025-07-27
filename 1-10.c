#include <stdio.h>

int main() {
  int ch;
  while ((ch = getchar()) != EOF) {
    if(ch == '\b') {
        putchar('\\');
        putchar('b');
    } else if (ch == '\t') {
        putchar('\\');
        putchar('t');
    } else if (ch == '\n') {
        putchar('\\');
        putchar('n');
    } else {
        putchar(ch);
    }
  }
  return 0;
}
