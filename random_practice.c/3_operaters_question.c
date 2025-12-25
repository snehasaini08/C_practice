#include<stdio.h>
int main()
{
    int a=0 , b=1 , c=-1, result;
    result = --a*(5+b)/2-c++*b;
    printf("Result: %d\n",result);
    printf("a: %d, b: %d, c: %d\n",a,b,c);
    return 0;
}