//create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference and area of a circle based on user input for the radius.

#include<stdio.h>
int main()
{
  const float pi=3.1459;
  float radius,circumference,area;
  printf("enter the radius of the circle:");
  scanf("%f",&radius);
  circumference=2*pi*radius;
  area=pi*radius*radius;
  printf("the circumfeerence of the circle is %f\n",circumference);
  printf("area of the circle is %f\n",area);
  return 0;
}