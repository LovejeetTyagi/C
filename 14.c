//Write a program to find the maximum of two numbers.

#include <stdio.h>
int main()
{
    int a,b;
    printf("This Program is MAde to compare two Numbers\n");

    printf("Enter TWo Numbers: ");
    scanf("%d %d", &a,&b);

    if(a>b)
    printf("%d is Greater than %d", a, b);
    else
    printf("%d is Greater than %d", b,a);

    return 0;

}