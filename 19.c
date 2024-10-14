//Write a program to find the eligibility for a driving license from age.

#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);

    if(age>=18)
    printf("You are eligible for driving license");
    else if(age<18)
    printf("You are not eligible for driving license");

    return 0;
}