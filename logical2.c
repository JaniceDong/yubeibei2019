#include <stdio.h>
int main (void) {
  int a = 8, b = 9, c = 10;
  int d = a++ || ++b && --c;
  printf ("a=%d, b=%d, c = %d, d=%d", a, b, c, d);
  return 0;
}
