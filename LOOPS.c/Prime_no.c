#include<stdio.h>
/*int main()
{
    int i=2,n,cnt=0;
    printf("Enter n = ");
    scanf("%d",&n);
    while(i<n)
    {
        if (n%i==0)
        cnt++;
        i++;
    }
    if(cnt==0)
    printf("Prime");
    else
    printf("Not prime");
    return 0;
}*/

//using break
int main()
{
    int n,i=2;
    printf("Enter n: ");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
        printf("Not Prime");
        break;
        }
        i++;
    }
    if(i==n)
    printf("Prime");
}