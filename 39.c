/*Write a program to input basic salary of an employee and calculate its Gross salary according 
to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/


#include <stdio.h>
int main()
{
    int salary,gross,hra,da;

    printf("Calculate gross salary\n");

    printf("Enter Your Basic Salary: ");
    scanf("%d", &salary);

    if(salary<=10000)
    {
        hra=(20*salary)/100;
        da=(80*salary)/100;
        gross = salary+hra+da;
        printf("Basic Salary = %d : HRA = %d : DA = %d\nGross Salary : %d", salary, hra,da,gross);
    }else if(salary<=20000)
    {
        hra=(25*salary)/100;
        da=(90*salary)/100;
        gross = salary+hra+da;
        printf("Basic Salary = %d : HRA = %d : DA = %d\nGross Salary : %d", salary, hra,da,gross);
    }else if(salary>20000){
        hra=(30*salary)/100;
        da=(95*salary)/100;
        gross = salary+hra+da;
        printf("Basic Salary = %d : HRA = %d : DA = %d\nGross Salary : %d", salary, hra,da,gross);
    }

    return 0;

}