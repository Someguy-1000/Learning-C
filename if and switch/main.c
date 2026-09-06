#include <stdio.h>

int main() {
  
  /* 
  if - execute code if condition is true
  else if - execcute if prior condition was not true but present
  else - execute if all prior conditions are false
  */

  char grade;

  printf("Enter your current grade in CS 101: ");
  scanf("%c", &grade);

  if (grade == 'A') {
    printf("Congrats! You are doing very well :)");
  // || is a logical operator, representing "if grade = b OR grade = c, execute"
  } else if (grade == 'B' || grade == 'C') {
    printf("Good work, you are passing! Consistency will bring you to an A ;)");
  } else if (grade == 'D' || grade == 'F') {
    printf("See me at office hours if you need any assistance with the material.");
  } else {
    printf("Enter a grade from A - F");
  }
  printf("\n");

  /*
  The code above can be rewritten as a switch statement
  Switch works by comparing a value to several options (cases) until it reaches a match
  If none of the cases match the input, the default case will run
  Comparing this to the if statements:
  switch = beginning of a series of if, else if statements given a variable
  case = a value that is compared to the value of the variable passed
  default = "else", or the code that is executed if none of the cases match the variable's value
  Note: Switch statements are great for comparing an int or char variable
  */

  switch(grade) {
    case 'A':
      printf("You have an A! Great work :)");
      break; // break = signal to continue without comparing other case values
    case 'B':
      printf("You have a B! Awesome work, keep it up!");
      break;
    case 'C':
      printf("You have a C, keep reviewing the material and I know you'll grow!");
      break;
    case 'D':
      printf("Dont give up! See me during office hours if you would like assistance with the material");
      break;
    case 'F':
      printf("I believe in you! Keep coming to class and submit assignments on time and you will succeed!");
      break;
    default:
      printf("Enter your grade silly!");
      break;
  }


  return 0;
}