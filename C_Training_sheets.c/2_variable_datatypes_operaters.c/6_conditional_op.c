#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a,b: ");
    scanf("%d %d" , &a,&b);

    int max = (a>b) ? a : b;
    printf("Max is : %d", max);

    return 0;

}