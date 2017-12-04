#include <stdio.h>


int bitcount(unsigned x);

int main() {
  printf("number of bits in %o is %d\n", 0777, bitcount(0777));
  printf("number of bits in %o is %d\n", 0767, bitcount(0767));
  printf("number of bits in %o is %d\n", 0706, bitcount(0706));
  printf("number of bits in %o is %d\n", 0, bitcount(0));
  return 0;
}

int bitcount(unsigned x) {
  int count;
  for (count = 0; x != 0; count++) {
    // by subtracting one the rightmost 1 bit always goes to 0
    // 10 - 1 = 01
    // 11 - 1 = 10
    // 100 - 1 = 011
    x &= (x-1);
  }
  return count;
}

