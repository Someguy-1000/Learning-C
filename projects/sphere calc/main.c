#include <stdio.h>
#include <math.h>

/*
Input - Radius of a sphere
Output - The sphere's area, surface area, and volume
*/

int main(){

  double radius = 0.0;
  double area = 0.0;
  double surfaceArea = 0.0;
  double volume = 0.0;
  const double PI = 3.14159265358979323846264;

  printf("Enter the radius: ");
  scanf("%lf", &radius);

  // Area (circle) = pi * r^2
  area = pow(radius, 2);
  area = PI * area;

  // V = 4/3 * pi * r^3
  volume = pow(radius, 3);
  volume = volume * PI;
  volume = volume / 3;
  volume = volume * 4;

  // SA = 4 * pi * r^2
  surfaceArea = pow(radius, 2);
  surfaceArea = surfaceArea * PI;
  surfaceArea = surfaceArea * 4;

  printf("Area: %.4lf\n", area);
  printf("Surface Area: %.4lf\n", surfaceArea);
  printf("Volume: %.4lf", volume);

  return 0;
}