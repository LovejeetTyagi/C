//Write a program to perform sum of two numbers.

#include <stdio.h>

int main(){

    int a,b,sum;
    printf("Enter Two Numbers to get their sum\n");
    scanf("%d %d", &a,&b);

    sum = a +b;

    printf("The Sum is %d",sum);
    return 0;
}