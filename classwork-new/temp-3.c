/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  char str[10], str2[15];
  int s2l;
  printf("Enter string 1: ");
  fgets(str, 10, stdin);
  printf("Enter string 2: ");
  fgets(str2, 15, stdin);
  s2l = strlen(str2);
  for (int i = 0; str[i] != '\0'; i++, s2l++) {
    str2[s2l+i] = str[i];
  }
  str2[strlen(str) + s2l] = '\0';
  printf("String 1: %sString 2: %s\n", str, str2);
  return 0;
}
