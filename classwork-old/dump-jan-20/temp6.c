/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  char str[20];
  int i = 0, c = 0;
  printf("Enter string: ");
  fgets(str, 20, stdin);
  for (i = 0; i < strlen(str) - 1; i++) {
    switch (str[i]) {
    case 'A':
      c++;
      break;
    case 'a':
      c++;
      break;
    case 'E':
      c++;
      break;
    case 'e':
      c++;
      break;
    case 'I':
      c++;
      break;
    case 'i':
      c++;
      break;
    case 'O':
      c++;
      break;
    case 'o':
      c++;
      break;
    case 'U':
      c++;
      break;
    case 'u':
      c++;
      break;
    }
  }
  printf("Number of vowels used: %d\n", c);
}
