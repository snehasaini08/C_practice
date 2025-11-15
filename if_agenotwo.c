#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(age>20 && age<30){
    printf("Your age is %d\n",age);
    printf("You can go coffee with me\n");
    }
    if(age>15){

    printf("Your age is %d",age);
    printf("Its time to go home\n");
    }
    return 0;
}