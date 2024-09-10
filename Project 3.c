// Calculate area of circle, square, rectangle, triangle
#include <stdio.h>
int main(){
    float a, p, q, s, t, r, ac, as, ar, at;
// Calculate area of circle

    printf("Calculate Area Of Circle \n\n");
    printf("Enter Radius Of Circle: ");
    scanf("%f",&r);

    ac = 3.14*r*r;
    printf("Area of circle: %f\n", ac);
// Calculate Area of Square
    printf("Calculate Area Of Square \n\n");
    printf("Enter Side Of Square: ");
    scanf("%f", &a);

    as = a*a;
    printf("Area Of Square Is: %f\n", as);

// Calculate Area of Rectangle

    printf("Calculate Area Of Rectangle \n\n");

    printf("Enter two Sides Of Rectangle: ");
    scanf("%f %f", &p, &q);

    ar = p*q;
    printf("Area of Rectangle is: %f\n",ar);

 //Calculate Area of Right Traingle

    printf("Calculate Area Of Right Traingle \n\n");

    printf("Enter value of base and perpendicular of right traingle: ");
    scanf("%f %f", &s,&t);
    
    at = (s*t)/2;
    printf("Area of Right Traingle is: %f", at);
}