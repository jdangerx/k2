#include <stdio.h>

int main() {
  int current, last_output;
  while ((current = getchar()) != EOF) {
    if (current == '\t') {
      last_output = '\t';
      putchar('\\');
      putchar('t');
    } else if (current == '\b') {
      last_output = '\b';
      putchar('\\');
      putchar('b');
    } else if (current == '\\') {
      last_output = '\\';
      putchar('\\');
      putchar('\\');
    } else if (current != ' ') {
      last_output = current;
      putchar(last_output);
    } else {
      if (last_output != ' ') {
        last_output = current;
        putchar(last_output);
      }
    }
  }
}
