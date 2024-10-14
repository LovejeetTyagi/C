//Write a program to perform multiplication of two numbers

#include <stdio.h>
int main(){
    int a,b,product;
    printf("Enter Two numbers to get their product");
    scanf("%d %d",&a,&b);

    product = a*b;
    printf("Product is %d",product);

    return 0;
}