/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int i, j;
  for (i = 1; i <= 5; i++) {
    for (j = 5; j >= i; j--) {
      printf("%d", 6 - j);
    }
    printf("\n");
  }
  return 0;
}
