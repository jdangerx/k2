#include <stdio.h>

char my_lower(char c);

int main() {
  printf("lower of %c is %c\n", 'Q', my_lower('Q'));
  printf("lower of %c is %c\n", 'q', my_lower('q'));
  printf("lower of %c is %c\n", '.', my_lower('.'));
  return 0;
}

char my_lower(char c) {
  return ((c <= 'Z' && c >= 'A') ? c + 'a' - 'A' : c);
}
