/* Write a program to perform the division of 2 numbers. The program should be able to handle 
the scenario if the denominator is zero. */

#include <stdio.h>
int main()
{
    int num1,num2;
    float division;
    printf("Enter First Number");
    scanf("%d", num1);

    printf("Enter Second Number");
    scanf("%d", num2);

    division=num1/num2;

    if(num2==0)
    printf("Error! Number can not divisible by 0.");
    else
    printf("Division is %.1f", division);

    return 0;

}
