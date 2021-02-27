/* Copyright (c) 2021 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

struct cricket {
  char playerName[30];
  char teamName[30];
  float battingAvg;
};

int main() {
  struct cricket c[5];
  int i;
  for (i = 0; i < 5; i++) {
    printf("Input data for player: %d\n", i + 1);
    printf("Enter player name: ");
    scanf("%s", c[i].playerName);
    printf("Enter team name: ");
    scanf("%s", c[i].teamName);
    printf("Enter batting average: ");
    scanf("%f", &c[i].battingAvg);
  }
  printf("\nPlayer Info:\n");
  for (i = 0; i < 5; i++) {
    printf("%s - %s - %.2f\n", c[i].playerName, c[i].teamName, c[i].battingAvg);
  }
  return 0;
}
