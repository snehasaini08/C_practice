#include<stdio.h>
int main()
/*{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
    return 0;
}*/

//assigning width
/*{
    int a;
    float b,sum;
    scanf("%d %f",&a,&b); //a=2 and b=47.63e-1  out b=4.763000
    sum=a+b;
    printf("%d %f",a,b);
    return 0;
}*/

{
    int a,b,c,sum,x;
    //clrscr();
    x=scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("sum=%d %d\n",sum,x);
    printf("%d",x);
    return 0;
}
