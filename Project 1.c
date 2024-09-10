// Write a program in c to calculate Si and ci 
#include <stdio.h>
#include <math.h>
int main(){
    float P,R,T,SI,AmountSI,CI,AmountCI,N;
    printf("Enter Principle Value: ");
    scanf("%f",&P);
    printf("Enter Rate of interest(Don't use Percent Sign) : ");
    scanf("%f",&R);
    printf("Enter Time(Years) Of interest : ");
    scanf("%f",&T);

// Formula to calculate SI
    SI = (P*R*T)/100;
    printf("Simple Interest is : %f\n",SI);

    AmountSI = P + SI;
    printf("The total amount including SI is: %f\n",AmountSI);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%f",&N);

// Formula to calculate CI
    AmountCI = P*pow((1 + R/(N*100)),(N*T));
    printf("Ci amount is %f", AmountCI);
    return 0;
}