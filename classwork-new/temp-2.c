/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  char str[20], str2[20];
  printf("Enter the string: ");
  fgets(str, 20, stdin);
  for (int i = 0; str[i] != '\0'; i++) {
    str2[i] = str[i];
  }
  str2[strlen(str)] = '\0';
  printf("String 1: %sString 2: %s\n", str, str2);
  return 0;
}
