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

int main() {
  int n = 0;
  printf("Input number to find factorial: ");
  scanf("%d", &n);
  printf("Factorial of %d: %d\n", n, fact(n));
  return 0;
}
