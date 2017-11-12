#include <stdio.h>

int main() {
  int cur, i, n_white, n_other;
  int n_digit[10];
  n_white = n_other = 0;

  for (i = 0; i < 10; ++i) {
    n_digit[i] = 0;
  }

  while ((cur = getchar()) != EOF) {
    if (cur >= '0' && cur <= '9') {
      ++n_digit[cur - '0'];
    } else if (cur == ' ' || cur == '\n' || cur == '\t') {
      ++n_white;
    } else {
      ++n_other;
    }
  }
  printf("digits =");
  for (i = 0; i < 10; ++i) {
    printf(" %d", n_digit[i]);
  }
  printf(" n_white = %d, n_other = %d", n_white, n_other);
}
