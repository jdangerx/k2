#include <stdio.h>

#define MAX_WORD_LEN 20

int main() {
  int wordlens[MAX_WORD_LEN], cur, cur_len, max_len_seen, i, most_popular;

  for (i = 0; i < MAX_WORD_LEN; ++i) {
    wordlens[i] = 0;
  }

  cur_len = max_len_seen = 0;

  while ((cur = getchar()) != EOF) {
    if (cur == ' ' || cur == '\n' || cur == '\t') {
      if (cur_len != 0 && cur_len < MAX_WORD_LEN) {
        ++wordlens[cur_len];
      }
      if (max_len_seen < cur_len && cur_len < MAX_WORD_LEN) {
        max_len_seen = cur_len;
      }
      cur_len = 0;
    } else {
      ++cur_len;
    }
  }

  // print the histogram
  // find most popoular, e.g. numrows
  most_popular = 0;
  for (i = 0; i <= max_len_seen; ++i) {
    if (wordlens[i] > most_popular) {
      most_popular = wordlens[i];
    }
  }

  int r, c;
  for (r = 0; r < most_popular; ++r) {
    // each row
    for (c = 0; c <= max_len_seen; ++c) {
      // in each row, we go through each wordlen and see if the count reaches this row, starting from the top
      if (wordlens[c] >= most_popular - r) {
        printf("  #");
      } else {
        printf("   ");
      }
    }
    printf("\n");
  }
  for (c = 0; c <= max_len_seen; ++c) {
    printf("%3d", c);
  }
}
