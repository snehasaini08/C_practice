#include<stdio.h>
int main()
{
   int arr[10]={3,45,34,12,12,43,345,5,6,7};
   int max1=45,max2=3;
    for(int i=0;i<=9;i++)
    {
         if(arr[i]>max1)
         {
              max2=max1;
              max1=arr[i];
         }
        if(arr[i]>max2 && arr[i]!=max1)
         max2=arr[i];
     }
         
         printf("%d",max2);
    return 0;
}