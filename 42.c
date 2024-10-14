/*42. Write a program to check whether the number is a vowel or consonant using switch :case.
*/


#include <stdio.h>
int main()
{
    char input;
    printf("Enter Your Alphabet: ");
    scanf("%c", &input);

    switch (input)
    {
    case 'a':case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'u':case'U':
    printf("Alphabet is Vowel");
        break;
    
    default:
    printf("Alphabet is consonant");
        break;
    }

    return 0;
}