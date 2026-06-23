// create a program that declares one variable of each of the fundamental data types(int, float, char, double) and assigns them values, then displays their values and prints the size of each variable in bytes using sizeof() operator

#include<stdio.h>
int main()
{
  int num1=20;
  float num2=0.98;
  double num3=0.000009;
  char word='p';
  printf(" the value of num1 is %d\n",num1);
  printf("the value of num2 is %f\n", num2);
  printf("the value of num3 is %lf\n",num3);
  printf("the value of word is %c\n", word);
  printf("the size of num1 is %zu \n", sizeof(num1));
  printf("the size of num2 is %zu \n", sizeof(num2));
  printf("the size of num3 is %zu \n",sizeof(num3));
  printf("the size of word is %zu \n", sizeof(word));

// the size of int is 4 bytes, float is 4 bytes, double is 8 bytes, and char is 1 byte in most systems
  return 0;
}