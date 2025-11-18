#include<stdio.h>
int main()
{
    int i,a,sum;
    for(i=1;i<=5;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a);
        if(a<0)
        {
        continue;
        }
        sum=sum+a;
    }
    printf("Sum=%d",sum);
}

    
