#include<stdio.h>
int main()
{
   int a,b;
   char operater;
   printf("Enter the opearter:");
   scanf("%c",&operater);
   printf("Enter a and b: ");
   scanf("%d%d",&a,&b);
   switch(operater)
   {
    case '+': printf("Addition is:%d",a+b);
              
    case '-':printf("Sub is a-b:%d",a-b);
              break;
    case '*':printf("Mul is %d",a*b);
              break;
    case '/':printf("Div is %d",a/b);
              break;
    default: printf("Invalid operater");
   }
   return 0;


}