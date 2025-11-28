#include<stdio.h>
int main()
{
    int i=2,sum=0;
    while(i<=20)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("Sum of the even numbers between 1 to 20:%d ",sum);
    return 0;
}