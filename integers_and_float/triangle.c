#include <stdio.h>

int main() {
  float height, width, result;

  printf("Height of side a: \n");
  scanf("%f", &height);

  printf("Width of side b: \n");
  scanf("%f", &width);

  result = (height * width) / 2;
  printf("Area of Triangle: %f\n", result);

  return 0;
}
