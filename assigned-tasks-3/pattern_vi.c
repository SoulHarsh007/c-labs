/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  char i, j;
  for (i = 'A'; i <= 'E'; i++) {
    for (j = 'E'; j >= i; j--) {
      printf("%c", i);
    }
    printf("\n");
  }
  return 0;
}
