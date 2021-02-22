/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int num, i, flag = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (i = 1; i < num; i++) {
    if (num % i == 0 && i != 1) {
      flag = 1;
      break;
    }
  }
  if (num == 1) {
    printf("1 neither prime nor composite\n");
  } else if (flag == 0) {
    printf("%d is a prime number\n", num);
  } else {
    printf("%d is not a prime number\n", num);
  }
  return 0;
}
