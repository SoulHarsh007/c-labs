#include <stdio.h>
#include <string.h>

int main() {
  char s1[20] = "Hello";
  printf("s1=%s", s1);
  strrev(s1);
  printf("s1=%s", s1);
  return 0;
}