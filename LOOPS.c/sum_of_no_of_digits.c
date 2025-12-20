#include<stdio.h>
int main()
{
    int x,cnt=0,n,r;
    printf("Enter number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        cnt=cnt+r;
        n=n/10;
    }
    printf("Sum of digits=%d",cnt);
    return 0;
}