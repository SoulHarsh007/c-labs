/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  float h, b;
  printf("Enter the height: ");
  scanf("%f", &h);
  printf("Enter the base: ");
  scanf("%f", &b);
  /* Wondering why didn't I use a variable to store the value?
   * That's because the result doesn't require further processing
   * also storing variable consumes memory and we don't want to waste
   * memory even if it is a few bits
   */
  printf("Area of the Triangle is: %.2f\n", 0.5 * h * b);
  return 0;
}
