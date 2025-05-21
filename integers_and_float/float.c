#include <stdio.h>

// Format Strings:
// %s = string of characters
// %d = integer numbers
// %f = float (decimal) numbers
// %f = double numbers

int main() {
  // Area of circle: radius * radius * PI
  float radius, pi, area;

  pi = 3.14;
  printf("Give me a radius in cm: \n");
  scanf("%f", &radius);

  area = radius * radius * pi;
  printf("The area of the circle: %f cm\n", area);

  return 0;
}
