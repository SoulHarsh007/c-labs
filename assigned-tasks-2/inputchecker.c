/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <ctype.h>
#include <stdio.h>

int main() {
  printf("Input a character: ");
  char v = getchar();
  if (isalpha(v))
    printf("The character is: %s\n",
            isupper(v) ? "an upper case alphabet" : "a lower case alphabet");
  else if (isdigit(v))
    printf("The character is: a digit\n");
  else
    printf("The character is: a special character\n");
  return 0;
}
