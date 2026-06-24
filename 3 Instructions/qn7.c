// create a program to calculate simple interest
#include<stdio.h>
int main()
{
  float principle,rate,time,simple_interest;
  printf("enter the principle amount:");
  scanf("%f",&principle);
  printf("enter the rate of interest:");
  scanf("%f",&rate);
  printf("enter the time period in years:");
  scanf("%f",&time);
  simple_interest=(principle*time*rate)/100;
  printf("the simple interest for principle amount= %f, rate of interest= %f and time period= %f is %f\n",principle,rate,time,simple_interest);
  return 0;
}