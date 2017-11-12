#include <stdio.h>

#define TABSTOP 10

int main() {
  int curr;
  int i;
  while ((curr = getchar()) != EOF) {
    if (curr == '\t') {
      for (i = 0; i < TABSTOP; ++i) {
        printf("%c", ' ');
      }
    } else {
      printf("%c", curr);
    }
  }
  return 0;
}
