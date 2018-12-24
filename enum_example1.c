#include <stdio.h>
enum DAY{SUN, MON=5, TUE, THR, FRI, SAT} yesterday, today = 1;
int main(void) {
  enum DAY tomorrow;
  tomorrow = today + 1;
  printf("SUN is %d\n", SUN);
  printf("MON is %d\n", MON);
  printf("TUE is %d\n", TUE);
  printf("yesterday is %d\n", yesterday);
  yesterday = (enum DAY) (today - 2);
  printf("yesterday is %d\n", yesterday);
  printf("today is %d\n", today);
  printf("tomorr is %d\n", tomorrow);
  return 0;
}
