/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  char file;
  FILE *fp = fopen(__FILE__, "r");
  printf("Current file contents:\n\n");
  for (file = '\0'; file != EOF; file = fgetc(fp)) {
    putchar(file);
  }
  return 0;
}
