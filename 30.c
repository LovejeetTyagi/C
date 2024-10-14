//30. Write a program to check whether a character is uppercase or lowercase alphabet.


#include <stdio.h>
int main()
{
    char n;
    printf("Enter Any Character: ");
    scanf("%c", &n);

    if(n>=65 && n<=90)
    printf("%c is Uppercase ", n);
    else if(n>=97 && n<=122)
    printf("%c is lowercase", n);


    return 0;
}