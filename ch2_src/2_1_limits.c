#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("Max char is %d, min char is %d\n", CHAR_MAX, CHAR_MIN);
  printf("Max short is %d, min short is %d\n", SHRT_MAX, SHRT_MIN);
  printf("Max int is %d, min int is %d\n", INT_MAX, INT_MIN);
  printf("Max long is %ld, min long is %ld\n", LONG_MAX, LONG_MIN);

  char max = 0;
  char temp = 0;
  int step = 1;
  while ((temp = temp + step) > max) {
    step *= 2;
    while ((temp + step <= temp) && (step > 1)) {
      step /= 2;
    }
    max = temp;
  }
  printf("Calculated max int is %d\n", max);
  char test = 127;
  // weird, this should not be 128 but is...
  printf("hmm try this: %d\n", test + 1);
  return 0;
}
