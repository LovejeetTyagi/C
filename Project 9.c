// A student is required to study five subject per term. Write a program to find the average marks of students in a term and average of three terms

#include <stdio.h>
int main(){
float sub1, sub2, sub3, sub4, sub5,sumt1 ,averaget1, averaget2, averaget3, avgpercentage, totalaverage;

    printf("Enter the marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter the marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter the marks of Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter the marks of Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter the marks of Subject 5: ");
    scanf("%f", &sub5);

    sumt1 = sub1 + sub2 + sub3 + sub4 + sub5;
    averaget1 = sumt1 / 5;

    printf("Average of Term 1 is %.2f\n", averaget1);

    printf("Enter Average of Term 2\n: ");
    scanf("%f", &averaget2);

    printf("Enter Average of Term 3\n: ");
    scanf("%f", &averaget3);

    totalaverage = averaget1 + averaget2 + averaget3;

    avgpercentage = totalaverage/3;
    printf("Average Percentage for 3 terms is %f", avgpercentage);
    
    return 0;

}