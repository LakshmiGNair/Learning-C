// create a program to convert Fahrenheit to Celsius
#include<stdio.h>
int main()
{
  float temp_f,temp_c;
  printf("enter the temperature in fahrenhit:");
  scanf("%f",&temp_f);
  temp_c=(temp_f-32)*5/9;
  printf("the temperature in celcius is %f\n",temp_c);
  return 0;

}