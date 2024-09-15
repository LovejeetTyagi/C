// Write a program to find the maximum of three integer numbers using the conditional operator

#include <stdio.h>
int main(){
    int a, b, c;
    printf("Check Which is greatest Numeber\n\n");

    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Conditions to check whether the number is greater

    if (a>b && a>c){
        printf("%d is greatest", a);
    }

    if (b>a && b>c){
        printf("%d is greatest", b);
    }

    if (c>b && c>a){
        printf("%d is greatest", c);
    }

    // Or we can directly use else statement for third number
    // else{
    //     printf("%d is greatest", c);
    // }
}