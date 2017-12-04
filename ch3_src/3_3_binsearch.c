#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n);
int binsearch_(int x, int v[], int n);

int main() {
  int i;
  int haystack_size;
  haystack_size = 100000;
  int haystack[haystack_size];
  int needle, index;
  clock_t begin, end;

  for (i = 0; i < haystack_size; i++) {
    haystack[i] = i;
  }
  needle = 2;
  begin = clock();
  for (i = 0; i < 100000; i++) {
    index = binsearch(needle, haystack, haystack_size);
  }
  end = clock();
  printf("%d is in the array at index %d. Took %g secs\n",
         needle,
         index,
         (double) (end - begin) / CLOCKS_PER_SEC);
  begin = clock();
  for (i = 0; i < 100000; i++) {
    index = binsearch_(needle, haystack, haystack_size);
  }
  end = clock();
  printf("%d is in the array at index %d. Took %g secs\n",
         needle,
         index,
         (double) (end - begin) / CLOCKS_PER_SEC);
  return 0;
}

int binsearch(int x, int v[], int n) {
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid]) {
      high = mid -1;
    } else if (x > v[mid]) {
      low = mid + 1;
    } else {
      return mid;
    }
  }
  return -1;
}

int binsearch_(int x, int v[], int n) {
  int low, high, mid;
  low = -1;
  high = n;
  while (low + 1 < high) {
    mid = (low + high) / 2;
    if (x < v[mid]) {
      high = mid;
    } else {
      low = mid;
    }
  }
  return (x == v[high]) ? high : -1;
}
