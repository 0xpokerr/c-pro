#include <stdio.h>

int main() {
  // condition operator is a if like operator ?: its hase three values needed to
  // work works based of true or false
  int a = 10;
  int b = 20;
  int large = (a > b) ? a : b;
  printf("%d\n", large);
}
