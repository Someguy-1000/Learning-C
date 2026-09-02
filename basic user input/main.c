#include <stdio.h>
#include <string.h>

int main(){

  /*
  Note: initalizing variables without assigning them in C is not good praxis

  There is a chance these variables do contain values

  Since they may be pointing to the same blocks of memory 
  from when these variable names were previously used

  This can lead to some undefined behavior

  Languages like Java prevent this but C does not
  */

  int age = 0;
  float gpa = 0.0f;
  char grade = '\0'; // null character terminator, not really necessary
  char name[30] = ""; // 30 bytes/characters

  printf("Enter your age here: ");
  // & is the "address of" operator
  // pointing to the memory block belonging to the variable
  scanf("%d", &age); 
  printf("Enter your GPA: ");
  scanf("%f", &gpa);
  printf("Enter your current grade in CS101: ");
  // The reason for the space before %c is due to the fact that scanf passes a newline char
  // When the next scanf is called, that newline char is still in the input buffer
  scanf(" %c", &grade);
  printf("Enter your name: ");
  /*
  Three things worth noting for scanf to string
  1) The & is unnecessary since 'name' already behaves like a pointer to its first element
  2) There is a potential buffer-overflow risk, hense the 29
  This restricts the length of user input to 29 characters
  Plus the newline character which still remains in that input buffer from the last scanf
  3) scanf will terminate with a space (blank) character, which means entering your full name will only read your first name
  scanf("%29s", name); Would work for reading first name only
  The best workaround for this is fgets(var, size, stdin)
  fgets (function get string) accepts variable (name) size (30) and means of reading (stdin - standard input)
  If the buffer size of name were to change, it must be changed within fgets as well
  A workaround for THIS is by setting size to sizeof(name)
  Using fgets has one downside, The newline char from the prior scanf is still in the input buffer
  calling getchar() removes that and clears the input buffer
  */
  getchar();
  fgets(name, sizeof(name), stdin);
  /* Always remember there will be a newline char lingering at the end of scanf and fgets
  so after fgets is called to assign name, there is a newline char added to the end
  Below, we are finding the current length of name, going to the last index,
  and assigning the value of the last index to be the null terminator
  CHALLENGE - Find a way of doing this without using string.h */
  name[strlen(name) -1] = '\0';
  printf("\nYour name is %s\n", name);
  printf("Your age is %d\n", age);
  printf("Your currrent grade i CS101 is %c\n", grade);
  printf("And your current GPA is %f\n", gpa);
  return 0;
}