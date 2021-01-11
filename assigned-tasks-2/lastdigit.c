/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int n;
  printf("Input a number: ");
  scanf("%d", &n);
  /*
   * Here we have used a ternary operator to perform verification task in one
   * line and avoid extending our code.
   */
  printf("The last digit of this number is: %s\n",
          ((n % 10) % 2 == 1) ? "Odd" : "Even");
  // This new line was created to make our code readable (Code Linter Used: Clang)
  return 0;
}
