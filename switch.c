#include <stdio.h>

int main() {
  // A c program which converts numbr to corresponding month using switch;
  int month;
  printf("Enter a number between(1 and 12):");
  scanf("%d", &month);
  switch (month) {
  case 1:
    printf("The Month is January\n");
    break;
  case 2:
    printf("The Month is February\n");
    break;
  case 3:
    printf("The Month is March\n");
    break;
  case 4:
    printf("The Month is April\n");
    break;
  case 5:
    printf("The Month is May\n");
    break;
  case 6:
    printf("The Month is June\n");
    break;
  case 7:
    printf("The Month is July\n");
    break;
  case 8:
    printf("The Month is August\n");
    break;
  case 9:
    printf("The Month is September\n");
    break;
  case 10:
    printf("The Month is October\n");
    break;
  case 11:
    printf("The Month is November\n");
    break;
  case 12:
    printf("The Month is December\n");
    break;
  default:
    printf("invalid Input");
    break;
  }
  return 0;
}
