#include <stdio.h>
int main(void) {
  int price;
  printf("the price of cigia is:\n");
  scanf("%d", &price);
  int save_money = price * 365 * 50;
  printf ("the price of cigia is %d, you can save %d RMB.\n",price, save_money);
  return 0;
}
