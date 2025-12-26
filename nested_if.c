#include <stdio.h>

/*
 * example of nested if conditions
 * by checking if a user is valid
 */

int main() {
  char user;
  int pass;
  printf("Enter Usename: ");
  scanf("%c", &user);
  printf("Enter Password: ");
  scanf("%d", &pass);
  if (user == 'a') {
    if (pass == 1234) {
      printf("Successfuly Logged In.\n");
      return 0;
    }
  }
  printf("invalid Username or Password.\n");

  return 1;
}
