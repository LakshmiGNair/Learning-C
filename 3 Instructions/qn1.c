// create a program that takes two numbers and shows result of all arithmetic operations (addition, subtraction, multiplication, division, and modulus)
#include<stdio.h>
int main()
{
   int num1,num2,sum,difference,product,quotient,modulus;
   printf("enter the first number:");
   scanf("%d",&num1);
   printf("enter the second number:");
   scanf("%d",&num2);
   sum=num1+num2;
   difference=num1-num2;
   product=num1*num2;
   quotient=num1/num2;
   modulus=num1%num2;
   printf("the sum of %d and%d is %d\n",num1,num2,sum);
   printf("the difference of %d and%d is %d\n",num1,num2,difference);
   printf("the product of %d and %d is %d\n",num1,num2,product);
   printf("the quotient of %d and %d is %d\n",num1,num2,quotient);
   printf("the modulus of %d and %d is %d\n",num1,num2,modulus);

}