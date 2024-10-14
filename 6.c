//Write a program to perform division of 2 numbers

#include <stdio.h>
int main(){

    int b;
    float division,a;

    printf("Enter Two Number to get their division");
    scanf("%f %d", &a,&b);

    division=a/b;
    printf("Division is %f", division);

    return 0;
}