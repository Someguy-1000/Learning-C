#include <stdio.h>


int square(int num) {
  /*
  This function, much like main() returns an integer
  Specifically, it returns a variable result based on num^2
  The variable result only exists in the context of this function
  Meaning it cannot be accessed by any other function (unless it were in the same class but that is for later)
  */
  int result = num * num;
  return result;
}

double add(double num) {
  /*
  This function accepts a double (stored in the variable num for the scope of this function)
  After solving for the sum of num  plus itself it is stored in the variable result
  Finally we return the result variable. num and result only exist in the context of this function
  This allows us to declare these values under the same name as other functions without error
  */
  double result = num + num;
  return result;
}


int main() {
  
  /*
  The concept of a return statement was breifly discussed in the basic functions lesson
  Here will expand on that with functions which return values (ie not void functions)

  return = sends a value (returns) back to where a function is called
  this value will always be of the same type as the functions declaration
  ie int main() will always return an integer

  when calling a function, it is important it is initialized before it is called
  this is because the C compiler is a single-pass compiler
  which means the compiler reads and compiles the source code in one linear pass (ie line by line)
  examples of languages with multi-pass compiler, which allow you to call a function which is defined later on in the source includes C# and Java
  even with this, there is a workaround for this which will be covered later in this course
  */

  int a = 3;
  /*
  On line 40 we are taking three steps:
  1. We declare an integer variable aSquared
  2. We call the square() function, passing the a variable initialized on line 33
  3. We are assigning the value returned from square(a) to our aSquared variable
  */
  int aSquared = square(a);
  printf("%d squared equals %d\n", a, aSquared);

  // remember, the purpose of splitting programs into seperate functions is for
  // A) Reusability for repeated tasks and B) Improved readability (We know exactly what square() is doing when called)
  int b = 12;
  int bSquared = square(b);
  printf("%d squared equals %d\n", b, bSquared);

  // Below is an example of calling/utilizing the add function declared above
  double c = 8.4;
  double cAdd = add(c);
  printf("%.1lf plus %.1lf is %.1lf", c, c, cAdd);

  /*
  In general, as we have seen here, the declaration of a function includes
  1. A return type (int, double, char, bool, etc)
  2. A function name
  3. A set of variables the function expects when called (stored in the ())
  There are many nuances to these fundementals, but for the sake of introduction this is our working definition of a function
  */
  return 0;
}