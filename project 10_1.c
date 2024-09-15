// Write a program to inetrchange the values of two variables without using the third variable.

#include <stdio.h>
int main(){
    int a=5, b=87;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping numbers
    a = a+b;
    b = a-b;
    a = a-b;

    printf("After Swapping: a=%d , b = %d", a,b);
}