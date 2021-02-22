/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int a[10][10], b[10][10];
  int r, c;
  printf("Enter no. of rows: ");
  scanf("%d", &r);
  printf("Enter no. of columns: ");
  scanf("%d", &c);
  printf("Enter elements for matrix A[row][column]:- \n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("a[%d][%d] = ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter elements for matrix B[row][column]:- \n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("b[%d][%d] = ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  }
  printf("Sum matrix\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", a[i][j] + b[i][j]);
    }
    printf("\n");
  }
  return 0;
}
