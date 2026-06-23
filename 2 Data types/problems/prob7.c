// create a program to swap two numbers

#include<stdio.h>
int main()
{
    int num1, num2, temp; // declare two integer variables and a temporary variable

    // input values for num1 and num2
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // display values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // swap the values using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // display values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}