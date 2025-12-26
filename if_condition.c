#include <stdio.h>

/*
 * simple if condition to check the largest number from two
 */

int main() {
  int num1;
  int num2;
  printf("Enter a number: ");
  scanf("%d", &num1);
  printf("Enter another number: ");
  scanf("%d", &num2);
  if (num1 > num2) {
    printf("First Number is large.(%d>%d)\n", num1, num2);
  } else {
    printf("Second Number is large.(%d>%d)\n", num2, num1);
  }
  return 0;
}
