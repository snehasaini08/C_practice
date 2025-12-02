//WAP if the three numbers are equal.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b & b==c)
    {
        printf("All numbers  are equal"); 
    }
    else printf("Not equal");
    return 0;
}