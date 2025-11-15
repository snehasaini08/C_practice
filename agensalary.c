#include<stdio.h>
#include<conio.h>
int main()
{
    int age,salary;
    printf("Enter the age and salary:");
    scanf("%d%d",&age,&salary);
    if(age>50)
    {
        if(salary<60000)
        {
            salary=salary+10000;
            printf("New salary is;%d",salary);
        }
        else{
            salary=salary+5000;
            printf("New salary is :%d",salary);
        }
    }
    else{
        salary=salary+3000;
        printf("salary is:%d",salary);
    }
      printf("End of the program");
      return 0;
}