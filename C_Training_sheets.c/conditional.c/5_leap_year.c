#include<stdio.h>
int main()
{
    int year;
    printf("year= ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0)
    printf("leap yaer");
    else 
    printf("Not leap year");
    return 0;
}