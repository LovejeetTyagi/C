//54. Write a program to find factorial of a number.


#include <stdio.h>
int main()
{
    double N,factorial=1;

    printf("Enter the number");
    scanf("%lf", &N);

    for(int i=2;i<=N;i++)
    factorial*=i;

printf("factorial of %lf is %lf", N,factorial);

return 0;
}