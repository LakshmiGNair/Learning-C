// create a program to calculate perimeter of a rectangle

#include<stdio.h>
int main()
{
  int length,width,perimeter;
  printf("enter the length of the rectangle:");
  scanf("%d",&length);
  printf("enter the width of the rectangle:");
  scanf("%d",&width);
  perimeter=2*(length+width);
  printf("the perimeter of the rectangle of length= %d and width = %d is %d\n",length,width,perimeter);
  return 0;
}