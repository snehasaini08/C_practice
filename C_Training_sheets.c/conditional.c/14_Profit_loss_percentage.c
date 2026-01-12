#include<stdio.h>
int main()
{
    int buy,sell;
    printf("Enter buy and sell price: ");
    scanf("%d",&buy,&sell);
    if(buy>sell)
    printf("Loss");
    else printf("Profit");
    return 0;
}