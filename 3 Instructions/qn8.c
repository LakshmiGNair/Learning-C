//create a program to calculate compound interest
#include<stdio.h>
int main()
{
  float principle,rate,time,compound_interest;
  printf("enter the principle amount:");
  scanf("%f",&principle);
  printf("enter the rate of interest:");
  scanf("%f",&rate);
  printf("enter the time period in years:");
  scanf("%f",&time);
  compound_interest=principle*(1+(rate/100))*time;
  printf("the compound interest for principle amount= %f, rate of interest= %f and time period= %f is %f\n",principle,rate,time,compound_interest);
  return 0;
}