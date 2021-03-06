/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp;
  char data[50];
  printf("Opening the file /tmp/data in write mode\n");
  fp = fopen("/tmp/data", "w");
  if (fp == NULL) {
    printf("Could not open file /tmp/data\n");
    return 1;
  }
  printf("Enter some text from keyboard to write in the file /tmp/data: ");
  fgets(data, 50, stdin);
  fputs(data, fp);
  printf("Closing the file /tmp/data\n");
  fclose(fp);
  return 0;
}
