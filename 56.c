//56. Write a program to print square, cube and square root of all numbers from 1 to N.


#include <stdio.h>
#include <math.h>
int main()
{float i,n,square,cube,sroot;

printf("Enter last number: ");
scanf("%f", &n);

for(i=1;i<=n;i++)
{   printf("For %.0f\n",i);
    square=i*i;
    cube=square*i;
    sroot=sqrt(i);
    printf("Square of %.0f is %.2f\n",i,square);
    printf("Cube of %.0f is %.2f\n",i,cube);
    printf("Square-Root of %.0f is %.2f\n",i,sroot);
}
return 0;
}