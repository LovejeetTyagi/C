//41. Write a program to find the eligibility for a driving license from age using switch case.

#include <stdio.h>
int main()
{
    int choice;
    printf("\tEnter Your Choice: \n");
    printf("1. Your age is 18 or above 18\n");
    printf("2. Your age is less than 18\n\n");


    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("You are eligible");
        break;
        case 2:
        printf("You are not eligible");
        break;
    }
    return 0;
}