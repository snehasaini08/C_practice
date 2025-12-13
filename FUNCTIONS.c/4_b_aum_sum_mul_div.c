#include<stdio.h>
void sum(),sub(),mul(),div();
void main()
{
    sum();
    sub();
    mul();
    div();
}

void sum()
{
   int sum=0,a,b;
   printf("Enter a and b: ");
   scanf("%d%d",&a,&b);
   sum=a+b;
   printf("sum=%d\n",sum);
}

void sub()
{
   int sub=0,a,b;
   printf("Enter a and b: ");
   scanf("%d%d",&a,&b);
   sub=a-b;
   printf("sum=%d\n",sub);
}

void mul()
{
   int mul=0,a,b;
   printf("Enter a and b: ");
   scanf("%d%d",&a,&b);
   mul=a*b;
   printf("sum=%d\n",mul);
}

void div()
{
   int div=0,a,b;
   printf("Enter a and b: ");
   scanf("%d%d",&a,&b);
   div=a/b;
   printf("div=%d\n",div);
}

/*void main()
{
    sum();
    sub();
    mul();
    div();
}*/

