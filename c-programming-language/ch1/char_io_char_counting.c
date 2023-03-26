#include <stdio.h>

/* count characters in input; 1st version */
/*
main() {
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%1d\n", nc);
}
*/

/* count characters in input; 2nd version */
main() {
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ; /* since for statement requires a body, we use an isolated semicolon;
         called null statement to represent an empty for loop */
  printf("%.0f\n", nc);
}
