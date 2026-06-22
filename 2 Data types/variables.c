#include <stdio.h>
int main()
{ 
  const float PI = 3.14; // declaring a constant float variable named 'PI' and initializing it with the value 3.14
  int age = 25; // declaring an integer variable named 'age' and initializing it with the value 25
  float out; // declaring a float variable named 'out' without initializing it

  out = 9.9; // assigning the value 9.9 to the variable 'out'
  printf("Age: %d\n", age);
  printf("%f\n", out);
  printf("%f ", PI);
  return 0;
}