#include <stdio.h>

/* copy input to ouput; 1st version */
/*
main() {
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
*/

/* copy input to output; 2nd version */
int main() {
  int c;

  printf("EOF: %d", EOF);

  while ((c = getchar()) != EOF)
    putchar(c);
}
