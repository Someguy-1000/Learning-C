/*
This project is intended after completion of the following:
Basic user input
Basic output
Arithmatic operators
*/

#include <stdio.h>
#include <string.h>

int main(){

  /*
  Project 1 : Simple shopping cart
  
  Create a program which accepts the following user input;
  The name of the item being bought
  The price of the item
  Quantity of said item being bought

  The program needs to output;
  Quantity of item being purchasaed
  Total price - Cost of item * quantity
  */

  char item[30] = "";
  int quantity = 0;
  float price = 0.00f;
  float total = 0.00f;

  printf("What is the name of the item being purchased? ");
  fgets(item, sizeof(item), stdin);
  item[strlen(item) - 1] = '\0';

  printf("How many %s(s) are being purchased? ", item);
  scanf("%d", &quantity);

  printf("How much does %s cost? $", item);
  scanf("%f", &price);

  total = price * quantity;

  printf("You are purchasing %d %s(s)", quantity, item);
  printf("The total cost of this purchase is $%.2f", total);

  return 0;
}