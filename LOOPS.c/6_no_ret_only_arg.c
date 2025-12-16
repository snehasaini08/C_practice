#include<stdio.h>
 
void sum(float,float);
void main()
{
    float x,y;
    printf("Enter a and b: ");
    scanf("%f%f",&x,&y);
    sum(x,y);
}


//void sum(float a,float b)
void sum(float x,float y)
{
   // float s=0;
   // s=a+b;
     //printf("Sum=%f",a+b);
    printf("Sum=%f",x+y);
}
