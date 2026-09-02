#include <stdio.h>
#include <math.h>

/*
Some built-in math functions using math.h
*/

int main(){

  int x = 3;
  float y = 3.14;
  float z = 3.99;
  int a = -3;
  float b = 45;

  // x = sqrt(x); // returns the square root
  // x = pow(x, 2); // returns x to the power of 2
  // x = round(y); // returns 3.0
  // y = ceil(y); // returns 4.00 (always rounds up)
  // z = floor(z); // returns 3.00 (always rounds down)
  // a = abs(a); // returns 3 (absolute value)
  // y = log(y); // returns 1.144223 (natural log)

  // b = sin(b); // enter radians - returns sin(radians)
  // b = cos(b); // returns cos(radians)
  // b = tan(b); // returns tan(radians)

  printf("x = %d\n", x);
  printf("y = %f\n", y);
  printf("z = %f\n", z);

  printf("a = %d\n", a);
  printf("b = %f\n", b);

  return 0;
}