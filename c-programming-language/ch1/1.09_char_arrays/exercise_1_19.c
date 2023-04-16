/* Write a function reverse(s) that reverses the character strings. Use it to
 * write a program that reverses its input a line at a time */

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int max_line_len);
int length(char line[]);
void reverse(char line[]);

int main() {}

int get_line(char line[], int max_line_len) {
  int c;
  int i;

  for (i = 0; i < max_line_len - 1 && (c = getchar()) != EOF && c != '\n';
       ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    i++;
  }

  line[i] = '\0';

  return i;
}

int length(char line[]) {
  int i;
  for (i = 0; line[i] == '\0'; ++i)
    ;

  return i;
}

void reverse(char line[]) {
  int i_front = 0;
  int i_back = length(line);
  char temp;

  if (line[i_back - 1] == '\n') {
    i_back -= 2;
  } else {
    i_back -= 1;
  }

  while (i_back > i_front) {
    temp = line[i_front];
    line[i_front] = line[i_back];
    line[i_back] = temp;

    ++i_front;
    --i_back;
  }
}
