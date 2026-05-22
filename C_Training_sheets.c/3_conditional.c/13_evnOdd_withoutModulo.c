#include<stdio.h>
int main()
{
 int n;
 printf("Enter n: ");
 scanf("%d",&n);
 if(n & 1)
 printf("odd");
 else printf("Even");
 return 0;
}