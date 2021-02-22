/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int swaper(int *x, int *y) {
  int a = *x;
  *x = *y;
  *y = a;
  return 0;
}

int main() {
  int x, y;
  printf("Enter number 1: ");
  scanf("%d", &x);
  printf("Enter number 2: ");
  scanf("%d", &y);
  swaper(&x, &y);
  printf("Number 1: %d\n", x);
  printf("Number 2: %d\n", y);
  return 0;
}
