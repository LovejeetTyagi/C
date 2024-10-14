//26. Write a program to find whether the number entered by the user is +ve, -ve or zero.

#include <stdio.h>
int main()
{
    float num;
    printf("Enter the Number: ");
    scanf("%f", &num);

    if(num>0)
    printf("%.1f is +ve", num);
    else if(num<0)
    printf("%.1f is -ve", num);
    else if(num==0)
    printf("%.1f is Zero", num);


    return 0;
}