#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char answer[32];
  printf ("please input yes or no:\n");
  gets(answer);
  int result = strcmp(answer,"yes");
  if (result == 0) {
    printf("you have input a yes~\n");
  } else {
    printf("you have input a no~\n");
  }
  return 0;
}
