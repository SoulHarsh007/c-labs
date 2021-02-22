/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int addn(int n) {
  int i, a = 0;
  for (i = n; i > 0; i--) {
    a += i;
  }
  return a;
}

int main() {
  int n;
  printf("Enter the numbers to add: ");
  scanf("%d", &n);
  printf("Ans: %d\n", addn(n));
  return 0;
}
