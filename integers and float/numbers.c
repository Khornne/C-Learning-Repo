#include <stdio.h>

// Types known
// char %s = a string of characters
// int %d = an integer, defaults to 32-bit, 0 -> 4.3 billion

int main() {
  int x, y, result;

  printf("Please input a number:\n");
  scanf("%d", &x);

  printf("Please enter another number:\n");
  scanf("%d", &y);

  result = x + y;
  printf("The result is %d\n", result);

  return 0;
}
