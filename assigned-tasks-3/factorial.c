/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int a, i, b = 1;
  printf("Enter a number: ");
  scanf("%d", &a);
  for (i = a; i > 0; i--) {
    b *= i;
  }
  printf("Factorial is: %d\n", b);
  return 0;
}
