/* Copyright (c) 2020 SoulHarsh007 (Harsh Peshwani)
 * Contact: maintainter@theniabot.ml or harshtheking@hotmail.com
 * GitHub: https://github.com/SoulHarsh007/
 */

/*
 * This code was developed on a Linux machine and using modern development tools
 * and not MSDos, So we use alternative header files which provide us access to
 * functions similar to clrscr, List of header files which provide similar
 * functions:
 *
 * curses.h
 *
 * use: clear()
 *
 * caca_conio.h
 *
 * use: clrscr()
 *
 * stdlib.h
 *
 * use: system("clear") {for linux} or system("cls") {for windows}
 *
 * there are more header files which can provide similar functions. using anyone
 * of them is recommended because conio.h is a non standard library used by
 * MSDos programs to interact with console
 *
 * PS: When compiling the code with gcc, make sure you link third party libs you
 * require / use or else you get undefined refrence errors
 */

#include <curses.h>
#include <stdio.h>

int main() {
  int c;
  printf("1.Multiply Two Numbers\n");
  printf("2.Divide Two Numbers\n");
  printf("3.Add Two Numbers\n");
  printf("4.Substract Two Numbers\n");
  printf("5.Exit\n");
  printf("Input Your Choice: ");
  scanf("%d", &c);
  switch (c) {
  case 1: {
    float n1, n2;
    clear();
    printf("Input Two Numbers: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    printf("Output: %.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
    break;
  }
  case 2: {
    float n1, n2;
    clear();
    printf("Input Dividend: ");
    scanf("%f", &n1);
    printf("Input Divisor: ");
    scanf("%f", &n2);
    printf("Output: %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
    break;
  }
  case 3: {
    float n1, n2;
    clear();
    printf("Input Two Numbers: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    printf("Output: %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    break;
  }
  case 4: {
    float n1, n2;
    clear();
    printf("Input Two Numbers: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    printf("Output: %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    break;
  }
  case 5:
    printf("Exiting!\n");
    break;
  default:
    printf("Invalid Input, Exiting!\n");
    break;
  }
  return 0;
}
