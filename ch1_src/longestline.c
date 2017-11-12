#include <stdio.h>

#define MAXLINE 50

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[]);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = my_getline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
    reverse(line);
    printf("%s", line);
  }
  if (max > 0) {
    printf("longest line: %s", longest);
  }
  return 0;
}

/**
 * Mutate the line array in place and return the line length.
 * We know it's maxline size so we need to stop before the array ends.
 */
int my_getline(char line[], int maxline) {
  int len, curr;

  for (len = 0; (curr = getchar()) != EOF && curr != '\n'; len++) {
    if (len == maxline - 1) {
      maxline = len * 2;
      char biggerline[maxline];
      copy(biggerline, line);
      line = biggerline;
    }
    line[len] = curr;
  }
  if (curr == '\n') {
    line[len] = curr;
    ++len;
  }
  line[len] = '\0';
  return len;
}

/**
 * Copy chars from `from` to `to`.
 * Assumes that the elements to copy are null-terminated.
 * Stops at MAXLINE in case there's no null termination.
 * Also assumes that the to array is big enough.
 */
void copy(char to[], char from[]) {
  int i;
  for (i = 0; (to[i] = from[i]) != '\0' && i < MAXLINE; ++i) {
  }
}

void reverse(char s[]) {
  int len, j;
  char temp;

  // how many non-\0 chars are there?
  for (len = 0; s[len] != '\0'; ++len) {
  }
  len -= 1;

  // for the first half, swap letter from the second half
  for (j = 0; j < len / 2; ++j) {
    temp = s[j];
    s[j] = s[len - 1 - j];
    s[len - 1 - j] = temp;
  }
}
