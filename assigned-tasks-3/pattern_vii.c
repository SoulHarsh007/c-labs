/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  char i, j;
  for (i = 'E'; i >= 'A'; i--) {
    for (j = 'A'; j <= i; j++) {
      printf("%c", j);
    }
    printf("\n");
  }
  return 0;
}
