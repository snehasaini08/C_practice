#include<stdio.h>
void oddeven(int);
void main()
{
    int num;
    printf("Enter  a number : ");
    scanf("%d",&num);
    oddeven(num);
}
void oddeven(int n)
{
    if(n%2==0)
        printf("%d is even\n",n);
    else
        printf("%d is odd\n",n);
}