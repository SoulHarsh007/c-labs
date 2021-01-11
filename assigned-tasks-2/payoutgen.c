/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  float basic, da, hra, pf, gross;
  printf("Input Basic: ");
  scanf("%f", &basic);
  da = basic * 0.1;
  hra = basic * 0.075;
  pf = basic * 0.125;
  gross = basic + da + hra + 300;
  printf("Basic Amount: %.2f\n", basic);
  printf("DA: %.2f\n", da);
  printf("HRA: %.2f\n", hra);
  printf("PF: %.2f\n", pf);
  printf("MA: %.2f\n", 300.00);
  printf("Gross: %.2f\n", gross);
  printf("NT: %.2f\n", (gross - pf));
  return 0;
}
