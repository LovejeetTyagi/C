// 29. Write a program to input any character and check whether it is the alphabet, digit, or special 
// character

#include <stdio.h>
int main()
{
    char i;
    printf("Enter Any Character: ");
    scanf("%c", &i);

    if(i>=65 && i<=90, i>=97 && i<=122)
    printf("%c is Alphabet", i);
    else if(i<=57 && i>=48)
    printf("%c is Digit", i);
    else
    printf("%c is Special Character", i);

    return 0;
}
