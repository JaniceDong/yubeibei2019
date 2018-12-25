#include <stdio.h>
int main (void) {
  int x = 8;
  printf ("8*2 =%d,8*4 =%d\n", 8*2, 8*4);
  printf ("8*2 =%d,8*4 =%d\n", 8<<1, 8<<2);
  printf ("8/2 =%d,8/4 =%d\n", 8/2, 8/4);
  printf ("8/2 =%d,8/4 =%d\n", 8>>1, 8>>2);
  return 0;
}
