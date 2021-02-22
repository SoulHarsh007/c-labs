/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int arr[10], n, i, j, extra;
  printf("Enter number of elements in the array: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter the values for element no. %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        extra = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = extra;
      }
    }
  }
  printf("Array in ascending order: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
