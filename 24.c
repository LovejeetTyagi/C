// Write a program to print factorial of a number.

#include <stdio.h>
int main()
{
    double num,i,factorial=1;
    printf("Enter number to find it's factorial: ");
    scanf("%lf", &num);

    for(i=2;i<=num;i++){
    factorial*=i;}

    printf("Factorial is: %lf", factorial);

    return 0;
}
