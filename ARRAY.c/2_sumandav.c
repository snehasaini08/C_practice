//WAP to read marks  of 5 students. calculate the average using arrays
#include<stdio.h>
void main()
{
    int marks[5];
    int sum=0;
    float avg;
    for(int i=0;i<5;i++)
    {
       scanf("%d",&marks[i]); 
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("%f",avg);
}