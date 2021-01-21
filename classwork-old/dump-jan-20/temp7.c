/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  char str[20];
  int i, c = 1;
  printf("Enter the string: ");
  fgets(str, 20, stdin); // gets(str);
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ')
      c++;
  }
  printf("Number of words: %d\n", c);
}
