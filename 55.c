//55. Write a program to find sum of first N natural number, N must be taken by the user.


#include <stdio.h>
int main()
{int N,i,sum=0;

printf("Enter value of N: ");
scanf("%d", &N);

for(i=1;i<=N;i++)
sum+=i;

printf("The Sum of %d natural numbers is: %d", N,sum);
return 0;
}