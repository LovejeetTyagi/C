//36. Write a program to find all roots of a quadratic equation.

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,r1,r2,D;

    printf("Quadratic Equation format: ax^2 + bx + c = 0\n");

    printf("Enter values of a,b and c\n");
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);

    D=(b*b)-(4*a*c);

    if(D>=0)
    {printf("Roots are Real\n");
    if(sqrt(D)==0)
    {printf("Roots are Equal also");
    r1=((-b)+(sqrt(D)))/(2*a);
    r2=((-b)-(sqrt(D)))/(2*a);
    printf("Roots are %d and %d", r1,r2);}
    else if(sqrt(D)>0)
    {
        printf("Roots are Different\n");
        r1=((-b)+(sqrt(D)))/(2*a);
        r2=((-b)-(sqrt(D)))/(2*a);
        printf("Roots are %d %d", r1,r2);
    }

    } else
    printf("Roots are Imaginary");

    return 0;


}