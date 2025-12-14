#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter a numbers: ");
    scanf("%d%d",&a,&b);
    if(a<b)
    i=a;
    else
    i=b;
    while(i>=1)
    {
        if(a%i==0 && b%i==0)
        {
            printf("HCF od a and b is: %d ",i);
            break;
        }
        i--;
    }
    return 0;
}

