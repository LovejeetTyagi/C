//Write a program to find the minimum of three numbers.

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b && a<c)
    printf("%d is the minimum of three numbers", a);
    else if(b<c)
    printf("%d is the minimum of three numbers", b);
    else
    printf("%d is the minimum of three numbers",c);

    return 0;
    
    }