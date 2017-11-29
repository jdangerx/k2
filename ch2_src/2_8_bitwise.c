#include <stdio.h>


unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() {
  unsigned char x = ~0, y = 1;
  int p = 3, n = 2;
  // expect 11 101 111
  // or      3   4   7
  printf("x: %ho, y: %ho, p: %d, n: %d, setbits: %o",
         x, y, p, n, setbits(x, p, n, y));
  return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  unsigned char mask = (unsigned char) ~((unsigned char) ~0 >> n) >> p;
  printf("mask: %ho\n", mask);
  // TODO: doesn't get the rightmost n bits of y, just the n bits starting at position p+1 of y
  return ((x & ~mask) | (y & mask));
}
