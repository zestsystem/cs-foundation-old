#include <stdio.h>

main() {

  int blanks_nr = 0;
  int tabs_nr = 0;
  int newlines_nr = 0;

  char c;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++blanks_nr;
    } else if (c == '\t') {
      ++tabs_nr;
    } else if (c == '\n') {
      ++newlines_nr;
    }
  }

  printf("blanks_nr: %d\n tabs_nr: %d\n newline_nr: %d\n", blanks_nr, tabs_nr,
         newlines_nr);

  return 0;
}
