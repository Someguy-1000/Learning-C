#include <stdio.h>

int main() {

  /*
  Logical operators are exactly what the name suggests
  The most common one was already covered '==' which is the equality comparison operator
  NOTE: "==" is not to be mistaken with "=";
  == is for comparison of equality
  = is for assignment

  Here are some other common logical operators

  ! - Negate, ie if the following is false
  != - Comparison of inequality, ie if a is NOT equal to b

  These two will be familiar if you are in descrete and have covered truth tables
  && - And, ie a and b are both true
  || - Or, ie either a or b is true

  < - Strictly less than
  > - Strictly greater than
  <= - Less than or equal to
  >= - Greater than or equal to
  */

  int a = 2;
  int b = 3;
  int c = 0;
  int answer = a + b;

  printf("Please enter a value from 1-10");
  scanf("%n", &c);

  /* 
  the following if statement can be rewritten using <= or >=
  preformance-wise they work the same, HOWEVER remember readability matters
  The statement of "c must be less than or equal to 10, and greater than or equal to 1"
  Logically speaking it is the same as the statement below, being
  "c must be strictly less than 11 and strictly greater than 0"
  But there are arguments for using either, it all depends on context and readability
  */
 
  if (c < 11 && c > 0) { // if c is strictly less than 10 and strictly greater than 0
    if (c == answer) {
      printf("You guessed correctly!");
    } else if (c > answer || c < answer) {
      printf("Sorry that is not correct, guess again!");
    }
  } else {
    printf("ERROR: Value entered is not 1-10");
  }

  return 0;
}