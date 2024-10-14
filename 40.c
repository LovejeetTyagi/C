/*40. Write a program to input electricity unit charges and calculate total electricity bill according 
to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

#include <stdio.h>
int main()
{
    float unit,total_bill,bill,unit1,unit2,unit3,unit4;

    printf("Enter Your Electricity Units: ");
    scanf("%f", &unit);

    if(unit<=50)
    unit1=unit*0.5;
    else if(50<unit<=150)
    unit2=unit*0.75;
    else if(150<unit<=250)
    unit3=unit*1.2;
    else if(250)
    unit4=unit*1.5;

    bill=unit1+unit2+unit3+unit4;

    total_bill=bill+(bill/5);

    printf("Total Bill is %.1f", total_bill);

    return 0;
}