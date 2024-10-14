//48. Write a program to print EVEN numbers from 1 to N using while loop.


#include <stdio.h>
int main()
{int i=2,N;
printf("This program is made to print even numbers\n");

printf("Enter End point to print even numbers: ");
scanf("%d", &N);

printf("Printing...\n");

while(i<=N){
if(i%2==0)
printf("%d\n",i);
i++;

}
return 0;
}