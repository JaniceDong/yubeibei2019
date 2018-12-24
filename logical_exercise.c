#include <stdio.h>
int main (void) {
  char c = 'k';
  int i = 1, j = 2, k = 3;
  float x = 3e+5, y = 0.85;
  printf ("%d,%d\n", !x*!y, !!!x);
  printf ("%d,%d\n", x||i&&j-3, i<j&&x<y);
}
