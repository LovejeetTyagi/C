//52. Write a program to print tables from numbers 1 to 20.


#include <stdio.h>
int main()
{int i,table,N;
printf("Printing Table");

for(N=1;N<=20;N++)
{printf("Table of %d\n",N);
    for(i=1;i<=10;i++)
    {table=i*N;
    printf("%d\n", table);
    }

}
return 0;
}