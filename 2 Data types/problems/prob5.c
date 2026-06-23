//create a program to print the area of a square by inputting its side length

#include<stdio.h>
int main()
{
  int side_length,area;
  printf("enter the length of the side of the square:");
  scanf("%d",&side_length);
  area=side_length*side_length;
  printf("the area of the square is :%d",area);
  return 0;
}