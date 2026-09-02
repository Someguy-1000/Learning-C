#include <stdio.h>

int main(){
  
  float w = 4;
  int x = 5;
  int y = 8;
  int z = -2;

  int a = 0;
  int b = 2; // gets overwritten when reassigned
  int c = 0;
  int d = 0;
  float e = 0;

  a = x + y; // add
  b = y - x; // subtract
  c = y * z; // multiply
  d = w / x; // divide (incorrectly, see below)
  e = w / x; // divide correctly
  // not recommended but possible initalization as arithmatic solution
  int f = y % x; // modulo (remainder post division, see below)

  // // overwrites value of a to be the sum of x and y
  // // side note - this is how you print multiple variables, pretty intuitive
  // printf("%d + %d = %d\n", x, y, a);
  // // overwrites value of b to be y minus x
  // printf("%d - %d = %d\n", y, x, b);
  // printf ("%d * %+d = %+d\n", y, z, c);
  // // prints 0 because d is not a float
  // printf("%.1f / %d is not %d\n", w, x, d);
  // // for this to work both w and e need to be float vars
  // printf("%.1f / %d is %.1f\n", w, x, e);
  // // y modulo x is 3 since 8 / 5 results in a remainder of 3
  // printf("%d modulo %d = %d", y, x, f);

  x++; // increments x by one (x is now 6)
  y--; // increments y by negative one (y is now  7)

  // augmented assignment 
  x+=2; // x is now 8 (x = x + 2) (8 = 6 + 2)
  y-=2; // y is now 5 (y = y - 2) (5 = 7 - 2)
  y*=4; // y is now 20
  x/=4; // x is now 2
  y/=x; // y is now 10 (y = y / x) (10 = 20 / 2)

  return 0;
}