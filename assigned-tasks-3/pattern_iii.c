/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int i, j, k;
  for (i = 0; i < 5; i++) {
    for (k = 5; k >= i; k--) {
      printf(" ");
    }
    for (j = 0; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
