#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Even factors: ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && i%2==0)
        printf("%d\n",i);
    }
    printf("Odd factors: ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && i%2!=0)
        printf("%d\n",i);
    }  
    return 0;                                       
}

//