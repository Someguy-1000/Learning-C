#include <stdio.h>

/*
void is a special function which does not expect any value to be returned
compared to int, bool, char etc functions, there is no return statement at the end of the function
for are purposes these functions will mainly be utilized when printing text
*/
void happyBirthday(char name[], int age) {
  /*
  Below is the template of this function printing a happy birthday message
  [name] and [age] are both going to be values passed to this function

  printf("Happy birthday to you!\n");
  printf("Happy birthday to you!\n");
  printf("Happy birthday dear [name]!\n");
  printf("Happy birthday to you!\n");
  printf("You are [age] years old!\n");
  */

  printf("Happy birthday to you!\n");
  printf("Happy birthday to you!\n");
  printf("Happy birthday dear %s!\n", name); // here we use the name variable passed to the function
  printf("Happy birthday to you!\n");
  printf("You are %d years old!\n", age); // and here we use the age variable passed to the function
}

/* 
int main is the entrypoint of all main.c programs
this function is named main which returns an integer
the () represents variables/values which are passed to the function
since main is the entrypoint it wont be called by any other functions (in good practice)
and therefore no values are passed to it, hense () being empty
*/

int main() {

  // Below are the variables we will be passing to the happyBirthday function
  char name[] = "Marc";
  int age = 24;

  happyBirthday(name, age);

  return 0;
}