#include<stdio.h>
int main()
{
    float a,b,mul;
    printf("Enter a and b: ");
    scanf("%f %f",&a,&b);
    mul=a*b;
    printf("Multiplication of a and b is: %.2f",mul);
    return 0;
}