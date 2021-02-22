/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  char str[10];
  int i = 0, j = 0;
  printf("Enter string: ");
  scanf("%s", str);
  for (j = strlen(str) - 1; j > i; i++, j--) {
    if (str[i] != str[j]) {
      printf("%s is not a palindrome\n", str);
      return 0;
    }
  }
  printf("%s is palindrome\n", str);
  return 0;
}
