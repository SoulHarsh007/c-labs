/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int i, j, roll_no[10], marks[10];
  for (i = 0; i < 10; i++) {
    printf("Enter Roll no. of student %d: ", i + 1);
    scanf("%d", &roll_no[i]);
    printf("Enter marks of student %d: ", i + 1);
    scanf("%d", &marks[i]);
  }
  printf("Printing stored values.\n");
  for (j = 0; j < 10; j++) {
    printf("Marks of student %d (Roll no.: %d) are %d\n", j + 1, roll_no[j],
            marks[j]);
  }
  return 0;
}
