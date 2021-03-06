/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr;
  int n, i;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Processing with malloc: \n");
  ptr = (int *)malloc(n * sizeof(int));
  if (ptr == NULL) {
    printf("Failed to allocate memory, exiting with code: 1\n");
    exit(1);
  } else {
    printf("Memory successfully allocated using malloc\n");
    for (i = 0; i < n; i++) {
      ptr[i] = i + 1;
    }
    printf("The elements of the array are: ");
    for (i = 0; i < n; i++) {
      printf("%d ", ptr[i]);
    }
    printf("\n");
    printf("Processing with calloc: \n");
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
      printf("Failed to allocate memory, exiting with code: 1\n");
      exit(1);
    } else {
      printf("Memory successfully allocated using calloc\n");
      for (i = 0; i < n; ++i) {
        ptr[i] = i + 1;
      }
      printf("The elements of the array are: ");
      for (i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
      }
    }
    printf("\n");
  }
  return 0;
}
