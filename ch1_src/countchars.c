#include <stdio.h>

int main() {
  long num_chars;
  /* while (getchar() != EOF) { */
  /*   ++num_chars; */
  /* } */
  for (num_chars = 0; getchar() != EOF; ++num_chars) {}
  printf("%ld\n", num_chars);
  return 0;
}
