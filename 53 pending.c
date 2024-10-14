/*53. Write a program to check entered number is ZERO, POSITIVE or NEGATIVE until user does not 
want to quit.*/

#include <stdio.h>
int main()
{
    int choice;
    int N;
    printf("1. Check the number\n");
    printf("2. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

     printf("Enter the number: ");
     scanf("%d", &N);

    while(1){
    switch (choice)
    {
    case 1:
    {
        if(N<0)
        {printf("%d is Negative", N);
        break;}
        else if(N>0){
        printf("%d is Positive", N);
        break;}
        else if(N==0)
        printf("%d is Zero", N);
    break;    
    }
    case 2:
    printf("Exiting...");
    break;
    default:
    printf("Wrong Input");
        break;
    }
    } 


return 0;
}