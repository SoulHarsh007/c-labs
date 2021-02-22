/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  char cont[40], str1[20], str2[20];
  int i, j;
  printf("Enter string 1: ");
  fgets(str1, 20, stdin);
  printf("Enter string 2: ");
  fgets(str2, 20, stdin);
  for (i = 0; str1[i] != '\0'; i++) {
    cont[i] = str1[i];
  }
  for (i = strlen(str1), j = 0; str2[j] != '\0'; i++, j++) {
    cont[i] = str2[j];
  }
  cont[i] = '\0';
  printf("Final output: %s\n", cont);
  return 0;
}
