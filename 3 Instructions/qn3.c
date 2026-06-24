// create a program to calculate product of two floating points numbers
#include<stdio.h>
int main()
{
   float num1,num2,product;
   printf("enter the first number:");
   scanf("%f",&num1);
   printf("enter the second number:");
   scanf("%f",&num2);
   product=num1*num2;
   printf("the product of %f and %f is %f\n",num1,num2,product);
   return 0;
   
}