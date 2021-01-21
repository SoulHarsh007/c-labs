/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int a[3][3];
  printf("Input Matrix Data (3x3)\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Enter a[%d][%d] ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Matrix Data is: a[%d][%d] = %d\n", i, j, a[i][j]);
    }
  }
  return 0;
}
