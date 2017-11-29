#include <stdio.h>
#include <stdlib.h>

void squeeze(char s1[], char s2[]);
int any(char s1[], char s2[]);
int in_string(char c, char s[]);

int main() {
  char *s1, *s2;
  size_t bufsize = 255;
  s1 = (char *) malloc(bufsize * sizeof(char));
  s2 = (char *) malloc(bufsize * sizeof(char));
  printf("s1> ");
  getline(&s1, &bufsize, stdin);
  printf("s2> ");
  getline(&s2, &bufsize, stdin);
  printf("any: %d\n", any(s1, s2));
  squeeze(s1, s2);
  printf("squeezed: %s\n", s1);
  printf("any: %d\n", any(s1, s2));
  return 0;
}

void squeeze(char s1[], char s2[]) {
  int i, j;
  for (i = j = 0; s1[i] != '\0'; i++) {
    if (!in_string(s1[i], s2)) {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}

int any(char s1[], char s2[]) {
  int i;
  for (i = 0; s1[i] != '\0'; i++) {
    if (in_string(s1[i], s2)) {
      return i;
    }
  }
  return -1;
}

int in_string(char c, char s[]) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    if (c == s[i]) {
      return 1;
    }
  }
  return 0;
}
