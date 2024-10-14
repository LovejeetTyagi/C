//Write a program to check whether the number is prime or not.


#include<stdio.h>

int main(){
    int i,n;

    printf("Enter Number to check it is prime or not");
    scanf("%d", &n);

    // Condition to check whether the number is prime or not.

    for (i=2;i<=n/2;i++){
        if(n%i==0)
        printf("%d is not prime",n);
        return 0;
    }

    printf("%d is prime",n);
    return 0;
}