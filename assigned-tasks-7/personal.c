/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

struct personal {
  char name[30];
  int date;
  float salary;
};

int main() {
  struct personal p[5];
  int i;
  for (i = 0; i < 5; i++) {
    printf("Input data for person: %d\n", i + 1);
    printf("Enter name: ");
    scanf("%s", p[i].name);
    printf("Enter date of joining: ");
    scanf("%d", &p[i].date);
    printf("Enter salary: ");
    scanf("%f", &p[i].salary);
  }
  for (i = 0; i < 5; i++) {
    printf("Output data for person: %d\n", i + 1);
    printf("Name: ");
    printf("%s", p[i].name);
    printf("Date of joining: %d\n", p[i].date);
    printf("Enter salary: %f\n", p[i].salary);
  }
  return 0;
}
