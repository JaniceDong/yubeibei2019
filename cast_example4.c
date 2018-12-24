#include <stdio.h>
float max (int a, int b) {
  if (a < b) {
    return b;
  } else {
    return a;
  }
}
int main(void) {
  float i = 123.322;
  float j = 212.1212;
  float m = max (i, j);
  printf ("m is %f\n", m);
}
