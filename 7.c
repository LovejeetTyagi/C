//Write a program to find the remainder of 2 numbers

#include <stdio.h>

int main(){

    int a,b;
    printf("Enter Two numbers to get their remainder");
    scanf("%d %d", &a,&b);

    printf("Remainder is %d", a%b);
    return 0;
}