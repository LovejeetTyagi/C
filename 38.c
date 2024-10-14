/*38. Write a program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and 
Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */

#include <stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,percentage,sum;

    printf("Enter Your Subjects\n");
    printf("Physics: ");
    scanf("%f", &m1);
    printf("Chemistry: ");
    scanf("%f", &m2);
    printf("Biology: ");
    scanf("%f", &m3);
    printf("Mathematics: ");
    scanf("%f", &m4);
    printf("Computer: ");
    scanf("%f", &m5);

    sum=m1+m2+m3+m4+m5;
    percentage=sum/5;

    printf("Total obtained Marks: %2f\n", sum);
    printf("Percentage = %.1f\n", percentage);

    if(percentage>=90)
    printf("Grade : A");
    else if(percentage>=80)
    printf("Grade : B");
    else if(percentage>=70)
    printf("Grade : C");
    else if(percentage>=60)
    printf("Grade : D");
    else if(percentage>=40)
    printf("Grade : E");
    else if(percentage<40)
    printf("Grade : F");


    return 0;
}