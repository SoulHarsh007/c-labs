/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c = 0;
  printf(
      "Input your equation's a,b, and c with refrence to ax^2 = bx + c = 0: ");
  scanf("%d %d %d", &a, &b, &c);
  float d = (b * b - 4 * a * c);
  printf("b^2 -4ac = %f\n", d);
  if (d == 0)
    printf("Roots are equal: %.2f\n", float((-1 * b) / (2 * a)));
  else if (d > 0)
    printf("Roots are: %.2f and %.2f\n",
           float((((-1 * b) + sqrt(d))) / (2 * a)),
           float((((-1 * b) - sqrt(d))) / (2 * a)));
  else
    printf("Unreal roots!\n");
  return 0;
}
