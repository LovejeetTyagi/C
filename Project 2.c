#include <stdio.h>
int main(){
    float cel,fah,Celsius,Fahrenheit;

    printf("Convert Celsius To Fahrenheit \n\n");

    printf("Enter the value of celsius: ");
    scanf("%f", &cel);

    Fahrenheit = 9*cel/5 + 32;
    printf("Fahrenheit Value is : %f\n\n", Fahrenheit);


    printf("Convert Fahrenheit to Celsius\n");

    printf("Enter the value of Fahrenheit: ");
    scanf("%f", &fah);

    Celsius  = 5*(fah-32)/9;
    printf("Celcius value is: %f\n", Celsius);


}