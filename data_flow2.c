#include <stdio.h>
int main(void) {
  float f_val1 = 10000000.123456789;
  float f_val2 = 10000000.10000000001;
  float f_val = f_val1 + f_val2;
  printf ("f_val is %f\n", f_val);
  /*double*/
  double d_val1 = 10000000.123456789;
  double d_val2 = 10000000.10000000001;
  double d_val = d_val1 + d_val2;
  printf ("d_val is %10.10lf\n", d_val);
  /*long double*/
  long double ld_val1 = 10000000.123456789;
  long double ld_val2 = 10000000.10000000001;
  long double ld_val = ld_val1 + ld_val2;
  printf ("ld_val is %10.10Lf\n", ld_val);
  return 0;
}
