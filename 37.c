//37. Write a program to calculate profit or loss.


#include <stdio.h>
int main()
{
    int profit,loss,cp,sp;

    printf("This program is made to calculate profit or loss\n");

    printf("Cost Price of Product: ");
    scanf("%d", &cp);

    printf("Selling price of product: ");
    scanf("%d", &sp);

    profit = sp-cp;
    loss=cp-sp;

    if(cp<sp)
    printf("Profit: %d", profit);
    else if(cp>sp)
    printf("Loss: %d", loss);

    return 0;

}