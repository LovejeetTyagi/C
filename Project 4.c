// Write a program to convert and print the length in metres in feet, inches and centimeters

#include <stdio.h>
int main()
{
    float l, feet, inches, centimeters;
    printf("Enter the Length of rod in meters: ");
    scanf("%f", &l);

    feet = l * 3.281;
    printf("Rod length in feets: %f\n", feet);

    inches = l * 39.37;
    printf("Rod length in feets: %f\n", inches);

    centimeters = l * 100;
    printf("Rod length in feets: %f\n", centimeters);

    return 0;
}