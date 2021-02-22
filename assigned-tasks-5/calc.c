/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
  float a, b;
  int c;
  printf("1. Add two numbers\n");
  printf("2. Subtract two numbers\n");
  printf("3. Multiply two numbers\n");
  printf("4. Divide two numbers\n");
  printf("Enter your choice: ");
  scanf("%d", &c);
  switch (c) {
  case 1:
    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);
    printf("%.2f + %.2f = %.2f\n", a, b, add(a, b));
    break;
  case 2:
    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);
    printf("%.2f - %.2f = %.2f\n", a, b, subtract(a, b));
    break;
  case 3:
    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);
    printf("%.2f * %.2f = %.2f\n", a, b, multiply(a, b));
    break;
  case 4:
    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);
    printf("%.2f / %.2f = %.2f\n", a, b, divide(a, b));
    break;
  default:
    printf("Invalid Input!\n");
    break;
  }
  return 0;
}
