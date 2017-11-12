#include <stdio.h>

#define OUT 0
#define LINE_COMMENT 1
#define BLOCK_COMMENT 2

#define QUOTE_OUT 0
#define QUOTE_IN 1

int main() {
  // hello please
  // remove this */

  /** and this!
   * particularly
   */

  int state = OUT;  // no comment
  int quote_state = OUT; /* no comment */
  char curr, last;
  curr = getchar();
  last = curr;
  while ((curr = getchar()) != EOF) {
    /* if (((curr == '"') || (curr == '\'')) && (last != '\\')) { */
    /*   if (quote_state == QUOTE_OUT) { */
    /*     quote_state = QUOTE_IN; */
    /*   } else { */
    /*     quote_state = QUOTE_OUT; */
    /*   } */
    /* } */
    if (state == OUT && quote_state == OUT) {
      if ((last == '/') && (curr == '/')) {
        state = LINE_COMMENT;
      } else if ((last == '/') && (curr == '*')) {
        state = BLOCK_COMMENT;
      } else {
        printf("%c", last);
      }
    }
    if (state != OUT) {
      if ((state == LINE_COMMENT) && (curr == '\n')) {
        state = OUT;
      } else if ((state == BLOCK_COMMENT) && (last == '*') && (curr == '/')) {
        state = OUT;
      }
    }
    last = curr;
  }
  return 0;
}
