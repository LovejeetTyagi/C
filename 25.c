//25. Write a program to find the area and perimeter of a rectangle.

#include <stdio.h>
int main()
{
    int a,b,perimeter,area;
    printf("Enter one side of rectangle: ");
    scanf("%d", &a);
    printf("Enter other side of rectangle: ");
    scanf("%d", &b);

    perimeter=2*(a+b);
    area = a*b;
    printf("Perimeter is %d\n\nArea is %d", perimeter, area);

    return 0;
}