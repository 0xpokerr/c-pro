#include <stdio.h>

int main() {
  // using while loop to create a comma seperated list of integers from
  // 0 to 100;
  int i = 0;
  printf("[");
  while (i < 100) {
    printf("%d,", i);
    i++;
  }
  printf("%d", i);
  printf("]\n");
  return 0;
}
