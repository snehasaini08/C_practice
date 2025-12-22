#include<stdio.h>
int main()
{
    int n,i,j,nsp,nst;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    nsp=n-1;
    nst=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
        printf("\n");
        nsp=nsp-1;
        nst=nst+1;
    }
}