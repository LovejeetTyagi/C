// C program to check whether a number is even or odd

#include <stdio.h>

int main(){
    int num;
    // Input from user
    printf("Enter the Number: ");
    scanf("%d", &num);

// Condition to check even or odd
    if (num%2 == 0){
        printf("%d is Even", num);
    } else{
        printf("%d is  odd", num );
    }
    return 0;
}