/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

struct students {
  char name[30];
  char branch[30];
  float marks;
};

int main() {
  struct students s[5];
  int i;
  for (i = 0; i < 5; i++) {
    printf("Input data for student: %d\n", i + 1);
    printf("Enter student name: ");
    scanf("%s", s[i].name);
    printf("Enter student branch: ");
    scanf("%s", s[i].branch);
    printf("Enter student marks: ");
    scanf("%f", &s[i].marks);
  }
  printf("\nStudent info: \n");
  for (i = 0; i < 5; i++) {
    printf("%s - %s - %.2f\n", s[i].name, s[i].branch, s[i].marks);
  }
  return 0;
}
