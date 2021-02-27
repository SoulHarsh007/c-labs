/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int fact(int n) {
  if (n < 0)
    n *= -1;
  if (n == 0)
    return 1;
  return n * fact(n - 1);
}

float sol(int t, float x, int i) {
  int n = 0;
  if (t == i) {
    return 0;
  } else {
    if (i % 2 == 0)
      n = (2 * i + 1);
    else
      n = -1 * (2 * i + 1);
    i++;
    return ((x * n) / fact(n)) + sol(t, x, i);
  }
}

int main() {
  int t;
  float x = 0;
  printf(
      "Processing equation: F(x) = x – x3/3! + x5/5! – x7/7! + ... + xn/n!\n");
  printf("Enter value of x: ");
  scanf("%f", &x);
  printf("Enter value of terms to process: ");
  scanf("%d", &t);
  printf("Processed Output: %f\n", sol(t, x, 0));
  return 0;
}
