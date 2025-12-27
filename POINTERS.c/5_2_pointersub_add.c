#include<stdio.h>
int main()
{
    int a[]={0,1,-1,10,11},d;
    int *p = &a[0];
    int *q= &a[4];
    d=p-q;
    printf("Difference=%d\n",d);
    *q=25;
    printf("%d %d\n",a[4],*q);
    d=q-p;
    printf("Difference=%d\n",d);
    *p=27;
    printf("%d %d\n",a[0],*p);
    q=q-3;
    printf("%d\n",q);
    p=p+3;
    printf("%d\n",p);
    d=p-q;
    printf("Difference=%d\n",d);
    return 0;

}