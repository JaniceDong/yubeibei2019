#include <stdio.h>
int main (void) {
  int radius;
  printf("please input a value of radius:\n");
  scanf ("%d\n", &radius);
  
  double cc;
  double PI = 3.1415926;
  cc = PI * radius *radius;
  printf ("%lf\n", cc);
  
  return 0;
}
