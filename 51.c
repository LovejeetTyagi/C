//51. Write a program to read an integer and print its multiplication table.


#include <stdio.h>
int main()
{int i,N,table=1;
printf("Enter an integer: ");
scanf("%d", &N);

// Condition to print table
for(i=1;i<=10;i++)
{table=i*N;
printf("%d\n", table);}
return 0;
}