/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int a, c, b = 0;
  printf("Enter a number: ");
  scanf("%d", &a);
  while (a != 0) {
    c = a % 10;
    a /= 10;
    b = b * 10 + c;
  }
  printf("Reversed number is: %d\n", b);
  return 0;
}
