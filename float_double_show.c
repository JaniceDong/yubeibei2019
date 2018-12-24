#include <stdio.h>
int main(void) {
  float a = 1234.5678;
  double b = 98765.4321;
  long double d;
  d = a * b;
  float e = a / b;
  printf("%e %Le %f\n", b, d, e);
  return 0;
}
