/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  float p, r;
  int n;
  printf("Input principal amount: ");
  scanf("%f", &p);
  printf("Input rate of intrest: ");
  scanf("%f", &r);
  printf("Input number of years: ");
  scanf("%d", &n);
  printf("Intrest amount: %.2f\n", ((p * r * n) / 100));
  return 0;
}
