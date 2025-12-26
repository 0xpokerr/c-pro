#include <stdio.h>

int main() {
  // an example with do while loop a program which make sure the value entered
  // is Positive;
  int positive_num;
  do {
    printf("Enter a Number: ");
    scanf("%d", &positive_num);
  } while (positive_num < 0);
  printf("Positive Number Entered: %d\n", positive_num);
  return 0;
}
