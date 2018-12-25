#include <stdio.h>
int main (void) {
  int a = 3, b = 4, c = 5;
  int d = (a++, b= a*2, a*++b);
  printf("%d, %d , %d ,%d", a, b, c, d);
  printf("%d, %d , %d ,%d", a, b, c, d);
  return 0;
}
