//Write a program to calculate Fahrenheit to Celsius.

#include <stdio.h>
int main()
{

    float  temp,celsius;
    printf("This Program is Designed to calculate Fahrenheit to Celsius\n\n");

    printf("Enter Temperature In Fahrenheit\n");
    scanf("%f", &temp);

    celsius = (temp-32)*(5.0/9);

    printf("Temperature in Celsius is %.1f", celsius);

    return 0;
}