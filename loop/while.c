#include <stdio.h>

int main() {
  int x;

  x = 0;
  while (x != 1) {
    printf("Do you wish to quit? Press 1 to quit.\n");
    scanf("%d", &x);
  }

  printf("This is Important!\n");
  return 0;
}
