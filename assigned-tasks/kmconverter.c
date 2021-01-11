/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  float km;
  int i;
  printf("1. Convert Kilometers to Meters\n");
  printf("2. Convert Kilometers to Feet\n");
  printf("3. Convert Kilometers to Inches\n");
  printf("4. Convert Kilometers to Centimeters\n");
  printf("5. Exit\n");
  printf("Input your choice: ");
  scanf("%d", &i);
  switch (i) {
  case 1:
    printf("Input the value in km: ");
    scanf("%f", &km);
    printf("%.2f Meters\n", (km * 1000));
    break;
  case 2:
    printf("Input the value in km: ");
    scanf("%f", &km);
    printf("%.2f Feet\n", (km * 3280.8399));
    break;
  case 3:
    printf("Input the value in km: ");
    scanf("%f", &km);
    printf("%.2f Inches\n", (km * 39370.0787));
    break;
  case 4:
    printf("Input the value in km: ");
    scanf("%f", &km);
    printf("%.2f Centimeters\n", (km * 100000));
    break;
  case 5:
    printf("Exit signal received, exiting...\n");
    return 0;
    break;
  default:
    printf("Invalid response received, exiting...\n");
    /*
     * Wondering why return 1 here? this will be exit code for the process and
     * exit code 1 means error while processing by convention in many programs
     * while exit code 0 means clean exit. This can help users with
     * Accessibility services such as talkback to understand that the program
     * failed because of their incorrect input.
     */
    return 1;
    break;
  }
}
