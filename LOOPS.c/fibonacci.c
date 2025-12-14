#include<stdio.h>
int main()
{
    int i=1,n,f=0,s=1,cr=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d\t%d",f,s);
    while(i<=n-2)
    {
        cr=f+s;
        printf("\t%d",cr);
        f=s;
        s=cr;
        i++;
    }
}