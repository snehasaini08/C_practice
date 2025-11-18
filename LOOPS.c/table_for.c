#include<stdio.h>
/*int main()
{
    int i,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {

        printf("%d*%d=%d\n",n,i,i*n);
    }
    return 0;
}*/
//or
int main()
{
    int i,n,a;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        a=i*n;
        printf("%d*%d=%d\n",n,i,a);
    }
    return 0;
}
