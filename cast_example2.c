#include <stdio.h>
int main(void) {
  float a = 123.111;
  float b = 123.922;
  int sum = (int) (a + b);
  printf ("sum is %d\n", sum);
  sum = (int)a + (int)b;
  printf ("sum is %d\n", sum);
  return 0;
}
