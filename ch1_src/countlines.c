#include <stdio.h>

int main() {
  int c, num_lines, num_tabs, num_blanks;

  num_lines = 1;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++num_lines;
    }
  }
  printf("\n%d lines", num_lines);
  return 0;
}
