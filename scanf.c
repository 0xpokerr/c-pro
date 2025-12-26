#include <stdio.h>

/*
 scanf in c is used to read users input, formatted input using placeholders.
*/

int main() {
  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  printf("The entered Number is: %d\n", num);
  return 0;
}
