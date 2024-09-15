// C program to check whether the number is positive, negative or zero

#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num>0){
        printf("%d is positive",num);
    }
    if (num<0){
    printf("%d is negative", num);
    } 
    if (num=0){
        printf("%d is Zero", num);
    }

    return 0;
}