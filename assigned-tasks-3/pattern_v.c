/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int i, j;
  for (i = 5; i >= 1; i--) {
    for (j = 1; j <= i; j++) {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}
