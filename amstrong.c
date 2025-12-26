#include <math.h>
#include <stdio.h>

int main() {
  // c program to check if a number is amstrong number;
  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  int temp = num;
  int n = 0;
  while (temp > 0) {
    temp = temp / 10;
    n++;
  }
  temp = num;
  int result = 0;
  while (temp > 0) {
    result += pow(temp % 10, n);
    temp = temp / 10;
  }
  printf("%s\n", (num == result) ? "The number is amstrong."
                                 : "The number is not amstrong.");

  return 0;
}
