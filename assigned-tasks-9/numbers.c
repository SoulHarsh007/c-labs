/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int a, n, i;
  FILE *fp1, *fp2, *fp3;
  fp1 = fopen("/tmp/data", "w");
  printf("How many numbers to process: ");
  scanf("%d", &n);
  printf("Enter contents of /tmp/data file:\n");
  for (i = 0; i < n; ++i) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &a);
    putw(a, fp1);
  }
  fclose(fp1);
  fp1 = fopen("/tmp/data", "r");
  fp2 = fopen("/tmp/odd", "w");
  fp3 = fopen("/tmp/even", "w");
  while ((a = getw(fp1)) != EOF) {
    if (a % 2 != 0)
      putw(a, fp2);
    else
      putw(a, fp3);
  }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  fp2 = fopen("/tmp/odd", "r");
  fp3 = fopen("/tmp/even", "r");
  printf("Contents of /tmp/odd file: \n");
  while ((a = getw(fp2)) != EOF)
    printf("%d ", a);
  printf("\n");
  printf("Contents of /tmp/even file : \n");
  while ((a = getw(fp3)) != EOF)
    printf("%d ", a);
  fclose(fp2);
  fclose(fp3);
  printf("\n");
  return 0;
}
