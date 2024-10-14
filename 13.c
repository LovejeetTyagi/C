//Write a program to add two complex numbers.

#include <stdio.h>
int main()
{
    float a,b,c,d,rsum,isum;

    printf("Complex Number Format is ( a+ib )\n");

    printf("Enter a and b for 1st complex number\n");
    scanf("%f %f", &a,&b);

    printf("Enter a and b for 2nd complex number\n");
    scanf("%f %f", &c, &d);

    printf("Adding.........\n");

    rsum=a+c;
    isum=b+d;

    printf("Addition is %.0f + i%.0f", rsum, isum);

    return 0;
}