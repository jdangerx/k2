#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int current, n_lines, n_words, n_chars, state;

  state = OUT;
  n_lines = n_words = 0;

  for (n_chars = 0; (current = getchar()) != EOF; ++n_chars) {
    if (current == '\n') {
      ++n_lines;
    }
    if (current == ' ' || current == '\n' || current == '\t') {
      state = OUT;
      putchar('|');
    } else {
      putchar(current);
      if (state == OUT) {
        state = IN;
        ++n_words;
      }
    }
  }
  printf("chars: %d, words: %d, lines: %d", n_chars, n_words, n_lines);
}
