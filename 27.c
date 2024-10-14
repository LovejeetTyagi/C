//27. Write a program to check whether the number is even or odd.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);


    if(num%2==0 && num!=0 && num>=2)
    printf("%d is Even", num);
    else if(num%2!=0 && num!=0 && num>=1)
    printf("%d is Odd", num);
    else
    printf("Wrong Input! Enter Natural Number Only");
}