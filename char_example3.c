#include <stdio.h>
int main(void) {
  unsigned char c;
  for(c = 1; c <= 128; c++){
    printf ("%d %c\n", c, c);
  }
  return 0;
}
