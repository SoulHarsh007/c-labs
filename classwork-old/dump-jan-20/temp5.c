/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  char str[50];
  printf("Enter the string: ");
  fgets(str, 50, stdin);
  for (int i = 0; i <= (strlen(str) - 2) / 2; i++) {
    char x = str[i];
    str[i] = str[(strlen(str) - (2 + i))];
    str[(strlen(str) - (2 + i))] = x;
  }
  str[strlen(str)] = '\0';
  printf("Output: %s\n", str);
}
