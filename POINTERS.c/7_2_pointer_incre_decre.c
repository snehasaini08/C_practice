#include<stdio.h>
int main()
{
    int a[]={10,11,-1,56,67,5,4};
        int *p,*q;
        p=a;
        q=&a[0]+3;
        printf("%d\n",*p);
//2 
        printf("%d %d %d\n",*p++,*p++,*++p);
//3
        printf("%d\n",*p);
//4
        printf("%d\n",*p++);
//5
        printf("%d\n",q);
//6
        printf("%d %d\n",*p++ , q--);
//7
        printf("%d %d\n",*p,p);
        //8
        printf("%d %d\n",&a[4],&a[5]); 

        printf("%d\n",q);

        printf("%d\n",(*(q+2))--);
        printf("%d %d\n",q,*q);

        printf("%d\n",*(p+2)-2);

        printf("%d\n",*(p++ -2)-1);
        printf("%d %d",&a[6],*p);
        return 0;
}