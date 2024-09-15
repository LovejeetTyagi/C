#include <stdio.h>
int main(){
    int a, b, temp;

    printf("Enter First Number: ");
    scanf("%d", &a);
 
    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Before Swapping: a=%d, b=%d\n", a, b);

    // swap the numbers

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping: a = %d, b = %d", a, b);

    return 0;
}