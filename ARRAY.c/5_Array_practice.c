#include<stdio.h>
int main()
{
    int a[100],i;
    for(int i=0;i<100;i++)
    {
        if(i<30){
        a[i]=1;
        printf("a[i]= %d=%d\n",a[i],i);
        }

        else a[i]=0;
    }
 
return 0;
}