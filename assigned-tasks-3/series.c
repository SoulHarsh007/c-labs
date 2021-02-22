/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int t, i;
  float sum = 0;
  printf("Enter the number of terms to be added: ");
  scanf("%d", &t);
  for (i = 1; i <= t; i++) {
    sum = sum + (1 / (float)i);
  }
  printf("The sum of %d terms is %.2f\n", t, sum);
  return 0;
}
