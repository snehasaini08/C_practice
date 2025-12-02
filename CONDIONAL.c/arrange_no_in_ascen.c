//WAP which will take 3 number as input from user and arrange them in ascending order.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the vaalue of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c && b>c)
    {
        printf("a>b>c");
    }
    else if(a>b && a>c && c>b)
    {
        printf("a>c>b");
    }
    else if(b>a && b>c && a>c)
    {
        printf("b>a>c");
    }
    else if(b>c && b>a && c>a)
    {
        printf("b>c>a");
    }
    else if(c>a && c>b && a>b)
    {
        printf("c>a>b");
    }
    else printf("c>b>a");
    return 0; 
}
