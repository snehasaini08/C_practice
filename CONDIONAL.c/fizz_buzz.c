#include<stdio.h>
int main()
{
    int n;
    printf("Enter the avlue of n: ");
    scanf("%d",&n);
    if (n%5==0 && n%3==0)
    {
        printf("FIZZBUZZ");
    }
    else if (n%5==0)
    {
        printf("BUZZ");
    }
    else if (n%3==0)
    {
        printf("FIZZ");
    }
    return 0;
}
