//Write a program to calculate the simple interest.

#include <stdio.h>
int main()
{
    int p,r,t;
    float si;
    printf("Enter Principal value: ");
    scanf("%d", &p);
    printf("Enter Rate value: ");
    scanf("%d", &r);
    printf("Enter Time value: ");
    scanf("%d", &t);

    si=(p*r*t)/100;

    printf("Calculating.......\n\n");
    printf("Simple Interest on %d for given time is %.2f", p, si);

    return 0;





}