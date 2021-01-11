/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  float c;
  printf("Input value in Centigrade: ");
  scanf("%f", &c);
  printf("Value in Fahrenheit is: %.2f\n", ((1.8 * c) + 32));
  return 0;
}
