#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

  char *line, c;
  size_t maxsize = 32;
  int total = 0, decimal = 0, start = 0;

  // get line
  line = (char *) malloc(maxsize * sizeof(char));
  getline(&line, &maxsize, stdin);
  // for char in line:
  printf("Got line: %s", line);

  if (line[0] == '0' && toupper(line[1]) == 'X') {
    start = 2;
  }
  for (int i = start; (c = line[i]) != '\0' && i <= maxsize; i++) {
    if (isxdigit(c)) {
      c = toupper(c);
      if (isdigit(c)) {
        decimal = c - '0';
      } else {
        decimal = c - 'A' + 10;
      }
      total = total * 16 + decimal;
    } else {
      printf("The hex code %s is %d\n", line, total);
    }
  }
  // printf("The hex code %s is %d", line, total);

  return 0;
}
