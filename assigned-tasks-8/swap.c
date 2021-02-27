/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int x, y, z, *b;
  printf("Enter value 1: ");
  scanf("%d", &x);
  printf("Enter value 2: ");
  scanf("%d", &y);
  z = x;
  b = &y;
  x = *b;
  y = z;
  printf("Value 1 after swapping: %d\n", x);
  printf("Value 2 after swapping: %d\n", y);
  return 0;
}
