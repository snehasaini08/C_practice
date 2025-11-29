//sum of even and odd factors of aa number
#include<stdio.h>
int main()
{
    int i=1,n,temp=0,even=0,odd=0;
    printf("Enter n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            temp=i;
            if(temp%2==0)
            {
            even=even+temp;
          }
            else
            {
                odd=odd+temp;
            }
        }
        i++;
    }
    printf("Even factors are:%d\n",even);
    printf("Odd factors area:%d\n",odd);
    return 0;
}