/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int *x, y;
  printf("Enter a number for variable y: ");
  scanf("%d", &y);
  x = &y;
  printf("Memory location of variable y: %p\n", x);
  return 0;
}
