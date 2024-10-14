//47. Write a program to print ODD numbers from 1 to N using while loop.


#include <stdio.h>
int main()
{int i=2,N;
printf("This program is made to print odd numbers\n");

printf("Enter End point to print odd numbers: ");
scanf("%d", &N);

printf("Printing...\n");

while(i<=N){
if(i%2!=0)
printf("%d\n",i);
i++;

}
return 0;
}