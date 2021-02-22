/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int i = 0, sum = 0, b = 0, j = 0;
  for (i = 0; i < 5; i++) {
    printf("Processing Student: %d\n", i + 1);
    sum = 0;
    for (j = 0; j < 3; j++) {
      printf("Input marks for subject %d: ", j + 1);
      scanf("%d", &b);
      sum += b;
    }
    printf("Marks for student: %d\n", i + 1);
    printf("Sum: %d\n", sum);
    printf("Average: %d\n", sum / 3);
  }
  return 0;
}
