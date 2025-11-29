#include<stdio.h>
int main()
{
    int i=1,n,a;                 //mene i ko initialize nhi kiya tha toh output nhi aya after enter n
    printf("Enter n: ");
    scanf("%d",&n);
    while(i<=10)
    {
        a=n*i;
        printf("%d\n",a);
        i++;
    }
    return 0;
}
