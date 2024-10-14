//Write a program to swap two numbers without using third variable.

#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers :");
    scanf("%d %d", &a,&b);

    printf("Numbers Before Swapping is %d %d\n", a, b);

    // condition to swap numbers
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    
    return 0;

}