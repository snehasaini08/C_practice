//WAP to read marks  of 5 students. calculate the average using arrays
#include<stdio.h>
void main()
{
    int marks[5];
    float sum=0;
    float avg;
    printf("Enter marks of 5 students:");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&marks[i]); 
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("Sum:%f\n",sum);
    printf("%f",avg);
}