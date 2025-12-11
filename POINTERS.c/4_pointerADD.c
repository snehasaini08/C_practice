#include<stdio.h>
int main()
/*{
    int a[5]={1,4,2,-8,0};
    int *p=&a[0];
    printf("value is %d\n",*p);
    printf("Adress of p: %u\n",p);
    //p=p+2;
    //printf("value is %d\n",*p);
    //printf("Adress of element is :%u\n",p);
    return 0;


}*/

/*{
    int a[5]={1,4,2,-8,0};
    int *p=&a[0];
    printf("value is %d\n",*p);
    printf("Adress of p: %u\n",p);
    p=p+2;
    printf("value is %d\n",*p);
    printf("Adress of element is :%u\n",p);
    return 0;


}*/

/*{
    int a[5]={1,4,2,-8,0};
    int *p=&a[0];
    int *q=&a[0];
    p=p+q;  //cant add two pointers
    printf("value is %d\n",*p);
    printf("Adress of p: %u\n",p);
    p=p+2;
    printf("value is %d\n",*p);
    printf("Adress of element is :%u\n",p);
    return 0;


}*/

{
    int a[5]={1,4,2,-8,0};
    int *p=&a[0];
    printf("value is %d\n",*p);
    printf("Adress of p: %u\n",p);
    p=p+2;
    *p=34;  //we have updated this value so it will print 34
    printf("value is %d\n",*p);
    printf("Adress of element is :%u\n",p);
    return 0;


}