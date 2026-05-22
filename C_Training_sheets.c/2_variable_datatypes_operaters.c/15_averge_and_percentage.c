#include<stdio.h>
int main()
{
    int a,b,c;
    float average,percentage,total;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d",&a,&b,&c);
    total=a+b+c;
    average=(total)/3;
    percentage=((total)/300)*100;
    printf("Average marks: %.2f\n",average);
    printf("Percentage: %.2f",percentage);
    return 0;
}