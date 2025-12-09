#include<stdio.h>
int main()
/*{
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    return 0;


}*/

/*{
    int a=10;
    int *p=&a;
    int **q=&a;   //here it will give error because q is pointer to pointer and we are assigning address of integer variable to it.
    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    return 0;


}*/

/*{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    printf("a=%d\n",*(*(*r)));
    printf("adress of q=%x %x\n",r,&q);
    printf("Adress of p=%x %x\n",&p,q);
    return 0;



}*/

/*{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    *p=12;  //value of a becomes 12 here
    **q=17;  // but now here value of a becomes 17 , final value of a =17
    printf("a=%d\n",a);  //a=17
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    printf("a=%d\n",*(*(*r)));
    printf("adress of q=%x %x\n",r,&q);
    printf("Adress of p=%x %x\n",&p,q);
    return 0;



}*/


{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    *p=12;  //value of a becomes 12 here
    **q=17;  // but now here value of a becomes 17 , final value of a =17
    ***r=10987;  // now here value of a becomes 10987 , final value of a =10987
    printf("a=%d\n",a);
     //a=10987
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    printf("a=%d\n",*(*(*r)));
    printf("adress of q=%x %x\n",r,&q);
    printf("Adress of p=%x %x\n",&p,q);
    return 0;
}


