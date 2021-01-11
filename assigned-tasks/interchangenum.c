/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

#include <stdio.h>

int main() {
  int n1, n2;
  printf("Input Number 1: ");
  scanf("%d", &n1);
  printf("Input Number 2: ");
  scanf("%d", &n2);
  /**
   * you can interchange number in program by using extra variable (say n3) then
   * assign c3=c1; then assign c1=c2; then finnaly assign c2=c3; This is for
   * refrence if you think this is not what you expected from this program.
   */
  printf("Number 1: %d\nNumber 2: %d\n", n2, n1);
  return 0;
}
