#include<stdio.h>
int main()
{
    int a,i,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a);
        if(a<0)
        {
            break;
        }
        sum=sum+a;
    }
    printf("sum is %d",sum);
    return 0;
}
/*
#include<stdio.h>
int main()
{
    int a,sum=0;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&a);
        if(a<0)
        break;
        sum=sum+a;
    }
    printf("Sum=%d",sum);
}*/


