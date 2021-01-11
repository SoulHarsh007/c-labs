/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int n1, n2, n3;
  printf("Enter Number 1: ");
  scanf("%d", &n1);
  printf("Enter Number 2: ");
  scanf("%d", &n2);
  printf("Enter Number 3: ");
  scanf("%d", &n3);
  if (n1 > n2) {
    if (n1 > n3)
      printf("The maximum out of (%d, %d, %d) is: %d\n", n1, n2, n3, n1);
    else
      printf("The maximum out of (%d, %d, %d) is: %d\n", n1, n2, n3, n3);
  } else if (n2 > n3)
    printf("The maximum out of (%d, %d, %d) is: %d\n", n1, n2, n3, n2);
  else
    printf("The maximum out of (%d, %d, %d) is: %d\n", n1, n2, n3, n3);
  return 0;
}
