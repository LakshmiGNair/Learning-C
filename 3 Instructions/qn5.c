// create a program to calculate area of a triangle
#include<stdio.h>
int main()
{
  float base,height,area;
  printf("enter the base of the triangle:");
  scanf("%f",&base);
  printf("enter the height of the triangle:");
  scanf("%f",&height);
  area=0.5*base*height;
  printf("the area of the triangle of base= %f and height = %f is %f\n",base,height,area);
  return 0;
}