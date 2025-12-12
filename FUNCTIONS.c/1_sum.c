#include<stdio.h>
void sub()
{
    int a,b,sub=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sub=a-b;
    printf("Sub is: %d\n ",sub);
}
void sum()
{
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum is :%d\n ",sum);
    sub();
}

void main()
{
    sum();
    printf("Hello\n");
    sum();
    sum();
    
}