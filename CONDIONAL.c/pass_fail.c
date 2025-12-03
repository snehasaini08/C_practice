//write a program if the student is pass or fail by using ternary operater.
/*#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:- ");
    scanf("%d",&marks);
    marks > 30 ? printf("PASS \n") : printf("FAIL \n");
return 0;    

}*/


#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks obtained by the student:- ");
    scanf("%d",&marks);

    if(marks>=30)
    {
        printf("The student is pass");
    }
    else
    {
    printf("The student is fail");
    }
    return 0;
}
