#include <stdio.h>

int main() {
  // int x;
  //
  // x = 5;
  //
  // if (x == 5) {
  //   printf("Yes, that is a number\n");
  // }

  int velocity;

  printf("How fast are you dring in mp/h?\n");
  scanf("%d", &velocity);

  if (velocity > 60) {
    printf("You are going too fast!\n");
  } else if (velocity > 30) {
    printf("You are driving safetly.\n");
  } else {
    printf("Speed up! You are going too slow.\n");
  }
  return 0;
}
