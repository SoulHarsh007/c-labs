/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int arr[10], n, i, j, max = 0;
  printf("Enter number of elements in the array: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter the values for element no. %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (j = 0; j < n; j++) {
    if (arr[j] > max) {
      max = arr[j];
    }
  }
  printf("The maximum element of array entered is %d\n", max);
  return 0;
}
