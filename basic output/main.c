#include <stdio.h>
// Header file for boolean vars
#include <stdbool.h>

int main(){

  // integer var - whole numbers (4 bytes typically)
  int age = 25;
  // decimal var (can be pos or neg) - single-precision decimal number (4 bytes)
  float pi = 3.14;
  // long decimal var - double-precision decimal number (8 bytes)
  double precise_pi = 3.14159265358979323846264338327950;

  // char variable - single character (1 byte)
  char character = 'C';
  char symbol = '@';
  // string - array of characters (size varies)
  char name[] = "Marc";

  // boolean - true or false (1 byte, requires <stdbool.h>)
  bool isWorking = true; // true can be 1, false can be 0
  
  // // console.log
  // printf("Hello world!\n");
  // // console.log + var
  // printf("I am %d years old\n", age);
  // printf("Pi starts with %f\n", pi);
  // // console.log + double (long float)
  // printf("A more precise value of pi would be %lf\n", precise_pi);
  // // || with controlled precision
  // printf("Thats too much! Here is pi to 6 decimal places %.6lf\n\n", precise_pi);
  
  // // console.log char var
  // printf("The third letter in the alphabet is %c\n", character);
  // printf("My email is marcvgauth%cgmail.com\n", symbol);
  // // console.log char[] (string)
  // printf("My name is %s\n", name);

  // // console.log bool
  // printf("%d", isWorking); //prints 1

  // // %d is a format specifier - controls how data is displayed or interpreted
  // // they can include optional modifiers such as width, precision, flags
  // printf("%d\n", age); // output is 25
  // printf("%f\n", pi); // output is 3.14
  // printf("%lf\n", precise_pi); // output is 3.14159265358979323846264338327950
  // printf("%c\n", symbol); // output is @ 
  // printf("%s\n", name); // output is Marc

  // int neg = -69; // nice
  // // width format specifier
  // printf("%4d\n", age); // output is "  25" total width will be 4 ("  25")
  // printf("%-2f\n", pi); // output is "3.14  " (insert two spaces before float)
  // printf("%04d\n", age); // output is "0025"
  // printf("%+d\n", age); // output is "+25"
  // printf("%+d\n", neg); // output is "-69"

  // precision format specifier
  printf("%.2f\n", precise_pi); // output is "3.14" (two decimal places)
  printf("%+07.2f\n", precise_pi); // output is "+003.14" (+/- counts towards width, decimal does not)

  return 0;
}