#include<stdio.h>
int main()
//1

/*{
    int a[]={3,2,67,0,56};
    int *p;
    p=a;
    printf("%d %d\n",*(p++),*p++);
    //also will check associativity in above from right to left //with or without bracket the result be same
    printf("%d\n",*p);
    return 0;
}*/

//2

/*{
    int a[]={3,2,67,0,56};
    int *p;
    p=a;
   // printf("%d %d\n",*++p,*++p); //associativity right to left
    printf("%d\n",*p--); //give garbage value
    printf("%d\n",*p);
    return 0;
}*/

//3

/*{
    int a[]={3,2,67,0,56};
    int *p;
    p=&a[3];
    printf("%d\n",*p--);
    printf("%d",*p);

}*/

//4

/*{
    int a[]={3,2,67,0,56};
    int *p;
    p=&a[3];
    printf("%d\n",*--p);
    printf("%d",*p);

}*/

//5

{
    int a[]={3,2,67,0,56};
    int *p;
    p=&a[3];
    printf("%d %d\n",*--p,*--p); //check associativity rightto left
    printf("%d",*p);
    return 0;

}



