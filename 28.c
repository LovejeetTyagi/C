//28. Write a program to check whether the number is a alphabet or consonant.

#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter Alphabet to check vowel or consonant: ");
    scanf("%c", &alphabet);

    if(alphabet == 'a'||'A'||'e'||'E'||'i'||'I'||'o'||'O'||'u'||'U')
    printf("%c is vowel", alphabet);
    else
    printf("%c is consonant", alphabet);
}