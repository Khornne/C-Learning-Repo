#include <stdio.h>

int main() {
  int answer;

  printf("How many characters are in the string 'Hello World'?\n");
  scanf("%d", &answer);

  if (answer == 10) {
    printf("WOW! You are correct!\n");
  } else if (answer != 10) {
    printf("Nope, the answer is wrong!\n");
  } else {
    printf("Please enter a number\n");
  }
}
