#include <stdio.h>
int main(void) {
  char a = '0';
  printf ("%c\n", a);
  printf ("%d\n", a);
  int num = a - 0x30;
  printf ("num is %d\n", num);
  return 0;
}
