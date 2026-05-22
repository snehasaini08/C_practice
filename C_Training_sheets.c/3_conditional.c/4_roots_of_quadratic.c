#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,root1,root2;
    printf("Enter a,b,c: ");
    scanf("%f\n %f\n %f",&a,&b,&c);
    d=b*b-4*a*c;
    root1= (-b+sqrt(d))/2*a;
    root2= (-b-sqrt(d))/2*a;
    printf("root1=%.2f\troot2=%.2f",root1,root2);
    return 0;
}