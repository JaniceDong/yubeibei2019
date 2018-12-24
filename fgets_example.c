#include <stdio.h>
#define STRLEN 14
int main(void) {
  char words[STRLEN];
  printf("please input a string:\n");
  fgets(words, STRLEN, stdin);
  printf("you have input a string:\n");
  puts(words);
  fputs(words, stdout);
  //another
  printf("please input another string:\n");
  fgets(words, STRLEN, stdin);
  printf("you have input a string:\n");
  puts(words);
  fputs(words, stdout);
  return 0;
}
