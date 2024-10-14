// 35. Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter first side of triangle: ");
    scanf("%d", &s1);
    printf("Enter second side of triangle: ");
    scanf("%d", &s2);
    printf("Enter third side of triangle: ");
    scanf("%d", &s3);

    if ((s1 + s2) > s3 && (s1 + s3) > s2 && (s3 + s2) > s1)
    {
        printf("Triangle is Valid\n");
        if (s2==s1 && s3==s1)
        {
            printf("Triangle is Equilateral");
        }
        else if(s1==s2 && s3!=s1)
         {printf("Triangle is Isosceles");}
        else if(s1!=s2!=s3)
         {printf("Triangle is Scalene");}
    }
    else
        printf("Triangle is Not valid");

    return 0;
}