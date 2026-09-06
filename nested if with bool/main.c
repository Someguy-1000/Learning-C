#include <stdio.h>
#include <stdbool.h>

int main() {
  
  /*
  If statements can be "nested", meaning two degrees of comparison
  This is denoted with the if statement contained inside an if statement
  This is good for organization when comparing the value of multiple different variables
  
  This program determines transit ticket cost dependant on two different discounts
  */

  float price = 10.00f;
  bool isStudent = false; // 10% discount
  bool isWorkStudy = false; // 15% discount (stacked)

  // isStudent = true;
  // isWorkStudy = true;


  if (isStudent){
    if (isWorkStudy) {
      printf("You get a student discount of 10%%\n"); // two % signs to escape character
      printf("You also get a work study employee discount of 15%%\n");
      price *= 0.75; // 25% discount, or 75% of original price
    }
    else {
      printf("You get a student discount of 10%%\n");
      price *= 0.9; // 10% discount
    }
  } else {
    printf("You do not a discount on this fare\n");
  }
  // Bonus challenge! Rewrite this logic in less lines while still maintaining all logic paths

  printf("The price of your fare is $%.2f", price);

  return 0;
}