/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int a = 0, b = 0, c = 1, d = 0, i = 0;
  printf("Enter a number: ");
  scanf("%d", &a);
  printf("Fibonacci series: ");
  for (i = 1; i <= a; i++) {
    printf("%d ", b);
    d = b + c;
    b = c;
    c = d;
  }
  printf("\n");
  return 0;
}
