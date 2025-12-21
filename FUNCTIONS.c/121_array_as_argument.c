#include<stdio.h>
int avg(int[],int);
void main()
{
    int marks[5]={10,20,30,40,50},average,size;
    size=sizeof(marks)/sizeof(marks[0]); //5=20/5
    average=avg(marks,size);
    printf("Average=%d\n",average); 
     printf("inside main fxn Size of array is(in bytes)=%d\n",sizeof(marks));   
}
int avg(int marks1[],int size)
{
    int i,sum=0,average=0;
    for(i=0;i<size;i++)
    {
        sum=sum+marks1[i];
    }
    //return(sum/size);
    average=sum/size;
    printf("inside avg fxn Size of array is(in bytes)=%d\n",sizeof(marks1));
    return average;
}
