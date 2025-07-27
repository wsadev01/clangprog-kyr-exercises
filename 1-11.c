#include <stdio.h>
// Programa de la fig. 1.5.4
// La respuesta a esta consulta es escribir "a" y apretar enter, cuenta cada caracter como palabra, ese es un bug, debe haber mas de seguro.
#define IN 1
#define OUT 0

int main() {
  int ch, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((ch = getchar()) != EOF) {
    ++nc;
    if (ch == '\n') 
      ++nl;
    if (ch == ' ' || ch == '\n' || ch == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN,
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
  return 0;
}
