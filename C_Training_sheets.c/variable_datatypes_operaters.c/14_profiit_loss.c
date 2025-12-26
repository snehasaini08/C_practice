#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter the selling price and cost price: ");
    scanf("%d %d",&sp,&cp);
    if(sp>cp)
    printf("Profit of %d",sp-cp);
    
    else if(cp>sp)
    printf("Loss of %d",cp-sp);
    
    else
    printf("No profit no loss");
    
    return 0;
}