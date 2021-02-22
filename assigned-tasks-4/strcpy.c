/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  char m[20], copy[20];
  int i;
  printf("Enter string 1: ");
  fgets(m, 20, stdin);
  for (i = 0; m[i] != '\0'; i++) {
    copy[i] = m[i];
  }
  copy[i] = '\0';
  printf("Main string '%s'\n", m);
  printf("Copied string '%s'\n", copy);
  return 0;
}
