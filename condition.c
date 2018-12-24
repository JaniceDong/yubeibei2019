#include <stdio.h>
int main (void) {
  int temp1 = 123, temp2 = 322;
  int max = temp1 > temp2 ? temp1 : temp2;
  printf ("max value is:%d\n", max);
  return 0;
}
