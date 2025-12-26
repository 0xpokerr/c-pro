#include <stdbool.h>
#include <stdio.h>

int main() {
  // 2 or 4 bytes - format %i or %d;
  int number = 10;
  // 4-bytes - format %f
  float decimal = 12.3;
  // 8-bytes - format %lf
  double big_decimal = 12.333333333333333333333333333333;
  // used to represent boolean - size 1byte - format %d (0 for false and any non
  // zero for true);
  bool isTrue = false;
  // 1-byte ascii charecter is used in c formatted with %c
  char c = 'c';
  // strings in c is represented as array of charecters formatted using %s
  char name[] = "Linus";
  // printf is formatted printing function used in c
  printf("The number: %d\nThe decimal: %f\nThe big_decimal: %lf\nThe boolean: "
         "%d\nThe charecter: %c\nThe string is: %s\n",
         number, decimal, big_decimal, isTrue, c, name);
  return 0;
}
