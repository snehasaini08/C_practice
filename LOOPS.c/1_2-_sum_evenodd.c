#include<stdio.h>
int main()
{
    int i=1,even=0,odd=0;
    while(i<=20)
    {
        if(i%2==0)
        even=even+i;
        else{
            odd=odd+i;
        }
        i++;
    }
    printf("Even=%d \t Odd=%d",even,odd);
    return 0;
}