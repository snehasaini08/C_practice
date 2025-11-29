#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("a is grt");
        else
        {
            if(b>c)
            printf("b is greater");
            else 
            printf("c is grt");
        }   
    }
    else {
        if(b>c)
        printf("b is greater");
        else printf("c is greater");
    }
    

    return 0;
}
