#include <stdio.h>
#define HEADING "this heading sucks\n"

main() {
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf(HEADING);
  for (int celsius = upper; celsius >= lower; celsius -= step) {
    printf("%3d\t%6.1f\n", celsius, (9.0 / 5.0) * celsius + 32);
  }
}
