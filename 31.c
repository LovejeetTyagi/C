//31. Write a program to input the week number and print the weekday.


#include <stdio.h>
int main()
{
    int num;
    printf("Enter Week number: ");
    scanf("%d", &num);

    switch(num){
    case 1:
    printf("Today is 'Sunday'");
    break;
    case 2:
    printf("Today is 'Monday'");
    break;
    case 3:
    printf("Today is 'Tuesday'");
    break;
    case 4:
    printf("Today is 'Wednesday'");
    break;
    case 5:
    printf("Today is  Thursday'");
    break;
    case 6:
    printf("Today is 'Friday'");
    break;
    case 7:
    printf("Today is 'Saturday'");
    break;
    
    default:
    printf("Wrong Input! Please use 1 to 7 value");

    }

    return 0;
}