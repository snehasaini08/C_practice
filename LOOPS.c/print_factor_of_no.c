#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the n: ");
    scanf("%d",&n);
    i=n;                          //i=1;                                 
 while(i>=0)                      //while(i<=n)   
    {
        if(n%i==0){
            printf("%d\n",i);
        }
        i--; //i++
    }
return 0;
}