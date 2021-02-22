/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  char str1[10], str2[10];
  printf("Enter string 1: ");
  fgets(str1, 10, stdin);
  printf("Enter string 2: ");
  fgets(str2, 10, stdin);
  printf("strlen(str1) = %d and strlen(str2) = %d\n", strlen(str2),
          strlen(str2));
  printf("The result of strcmp(str1,str2): %d\n", strcmp(str1, str2));
  strcat(str1, str2);
  printf("After using strcat(str1,str2)\nstr1 = %s str2 = %s\n", str1, str2);
  strcpy(str1, str2);
  printf("After using strcpy(str1,str2)\nstr1 = %s str2 = %s\n", str1, str2);
  return 0;
}
