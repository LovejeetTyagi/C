// Write a program to read in two integers and display one as a percentage of the other.

#include <stdio.h>
int main(){
    float a, b;
    float percentage;
    printf("Enter first integer: ");
    scanf("%f", &a);

    printf("Enter second integer: ");
    scanf("%f", &b);

    percentage = (a/b)*100;

    printf("%.0f is %.1f%% of %.0f", a, percentage, b);
    
    return 0;

}