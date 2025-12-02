#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && b==c)
    {
        printf("Equilateral Triangle");
    }
    else if (a==b || b==c || c==a)
    {
        printf("Isosceles teiangle");
    }
    else{
        printf("Scalene Triangle");
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c)
    {
        printf("Equilateral triangle");
    }
    else if(a==b!=c)
    {
        printf("Isosceles triangle");
    }
    else {
    printf("Scalene Triangle");
    }
    return 0;
}*/