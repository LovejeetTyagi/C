// Write a program to check whether the given year is leap or not

#include <stdio.h>
int main(){
    int year;
    printf("Check Year is leap year or not\n");
    printf("Enter Year: ");
    scanf("%d", &year);

    // Conditions to check leap or not

    if(year%4 == 0 || year%400 == 0){
        printf("%d is Leap year", year);
    } else {
        printf("%d is not a Leap year", year);
    }

    return 0;
}