#include<stdio.h>
/*int main()
{
    int f;
    float cel;
    printf("Enter f: ");
    scanf("%d",&f);
    cel=(f-32)*5/9;
    printf("%f^C",cel);
    return 0;
}*/

//farenheit to celcius
int main()
{
     int c;
    float f;
    printf("Enter c: ");
    scanf("%d",&c);
    f=(c*9/5+32);
    printf("%f^F",f);
    return 0;
}