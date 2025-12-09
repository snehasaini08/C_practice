#include<stdio.h>
int main()
/*{
    int a=10,b=5;
    int *p,*q;
    p=&a;
    q=p;
    printf("a= %d %d %d\n",a,*p,*q); //out=10 10 10
    return 0;

}*/

{
    int a=10,b=5;
    int *p,*q;
    p=&a;
    //q=&b;   // her in my case without q=&b does not giving error
    *q=*p;
    printf("a= %d %d %d\n",a,*p,*q);
    return 0;

}
