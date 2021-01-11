/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int grade;
  printf("Input Grade: ");
  scanf("%d", &grade);
  if (grade >= 80)
    printf("Distinction\n");
  else if (79 >= grade && grade >= 60)
    printf("First Class\n");
  else if (59 >= grade && grade >= 40)
    printf("Second Class\n");
  else if (40 > grade)
    printf("Fail\n");
  return 0;
}
