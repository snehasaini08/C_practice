#include<stdio.h>
int main()
{
    int a[10];
    int even=0,odd=0,i;
    printf("Enter the elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even numbers are: %d\n",even);
    printf("Odd numbers are; %d\n",odd);
    return 0;
}