// Write a program to determine whether the roots of a quadratic equation ax^2 + bx +c = 0 are real or imaginary. If they are real find the roots and display them.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, D;
    printf("Calculate Roots of Quadratic Equation\n");

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    D = (b * b) - (4 * a * c);

    if (D >= 0)
    {
        printf("Roots are Real\n");

        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);

        printf("First Root is %f\n", x1);
        printf("Second Root is %f\n", x2);
    }
    else
    {
        printf("Roots are Imaginary!\n");
    }

    return 0;
}
