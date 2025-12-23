#include<stdio.h>
int main()
{
    int i,j,nst,nsp,n;
    scanf("%d",&n);
    nst=1;
    nsp=(2*n)-3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("*");
        }
        printf("\n");
        nst=nst+1;
        nsp=nsp-2;
    }
    return 0;
}