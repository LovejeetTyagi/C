//Write a program to find the minimum of two numbers.

#include <stdio.h>
int main()
{
    int a,b;

    printf("This program is made to compare two numbers\n");

    printf("Enter TWo Numbers: ");
    scanf("%d %d", &a,&b);

    if(a<b)
    printf("%d is less than %d",a,b);
    else
    printf("%d is less than %d", b, a);

    return 0;
}