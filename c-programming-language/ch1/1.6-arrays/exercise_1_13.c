#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define BUFFER 100

int main(void) {
  int histogram[BUFFER];
  int histogram_length;

  int max_word_count = 0;

  // Initialize histogram array with 0
  int i;
  for (i = 0; i < BUFFER; ++i) {
    histogram[i] = 0;
  }

  // Count the words length and store in histogram array at the specific index.
  char c;
  int word_count_index = 0;
  while ((c = getchar())) {
    if (c == ' ' || c == '\t' || c == '\n' || c == EOF) {
      if (word_count_index > 0) {
        ++histogram[word_count_index - 1];
      }
    }
  }
}
