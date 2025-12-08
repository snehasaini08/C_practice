#include<stdio.h>
#include<string.h>
int main()
{
    int a=10,b=9,c;
    int *p,*q;
    p=&a;
    p=&b;
   // q=&b;
    c=*p;
    printf("Value of a=%d\n",a);
    printf("Value of a=%d\n",*p);
    printf("address of a=%x\n",&a);
    printf("adress of a=%x\n",p);
    printf("adress  of p=%x\n",&p);
    printf("c=%d\n",c);
    return 0;
    


}