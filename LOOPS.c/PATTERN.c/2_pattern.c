#include<stdio.h>
int main()
{
    int n,i,j,nst;
    scanf("%d",&n);
    nst=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
        printf("\n");
        nst=nst+1;
    }
    return 0;
}