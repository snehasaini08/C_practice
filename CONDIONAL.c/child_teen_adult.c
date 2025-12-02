#include<stdio.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d",&age);
    if(age<=12)
    {
        printf("Child");
    }
    else if( age<=19)
    {
        printf("Teen");
    }
    else if(age<=45)
    {
        printf("adult");
    }
    else
    printf("Senior");
    return 0;
}