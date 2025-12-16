//write a progran which will take a number as input from user and count no of digit present in that no.
#include<stdio.h>
int main()
{
    int x,cnt=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x>0)
    {
        x=x/10;
        cnt++;
    }
    printf("The total number of digits in x are: %d",cnt);
    return 0;
}