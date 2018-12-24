#include <stdio.h>
int main(void) {
  int a, b = -1;
  unsigned c = 123456, d;

  a = (int)c;
  d = (unsigned)b;
  printf ("a is %d\n", a);
  printf ("d is %d\n", d);
  /* */
  a = c;
  d = b;
  printf ("a is %d\n", a);
  printf ("d is %d\n", d);
  return 0;
}
