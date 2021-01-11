/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  char str[20], str2[20];
  printf("Enter string 1: ");
  fgets(str, 20, stdin);
  printf("Enter string 2: ");
  fgets(str2, 20, stdin);
  if (strlen(str) == strlen(str2)) {
    printf("Strings have same length and are the same!\n");
  } else {
    printf("Strings don't have same length!\n");
  }
  return 0;
}
