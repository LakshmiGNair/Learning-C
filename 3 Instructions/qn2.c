// given an integer value, convert it to a floating point value and print both 
#include<stdio.h>
int main()
{
  int num1;
  printf("enter the integer value:");
  scanf("%d",&num1);
  float num2=num1;
  printf("the integer value of num1 is %d\n",num1);
  printf("the floating point value of num1 is %f",num2);
  return 0;
}