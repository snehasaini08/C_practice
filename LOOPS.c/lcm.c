#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    i=a;
    else
    i=b;
    while(i<=a*b){
        if(i%a==0 && i%b==0)
        {
            printf("LCM od a and b is: %d ",i);
            break;
        }
        i+=i;
    }
    return 0;
   
}