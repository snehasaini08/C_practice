#include<stdio.h>

//void sum();  //function declaration
/*void main()
{
    sum();    //function caling
}

void sum()  //function definition
{
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
}*/

/*float sum();
void main()
{
    sum();
}

float sum()
{
    float a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",sum);
}*/

/*float sum();
void main()
{
    sum(5,7);  //it will not give error but due to logic it should give error
}

float sum()
{
    float a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",sum);
}*/


/*float sum(void);
void main()
{
    sum(4,2);  //now give error
}

float sum()
{
    float a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",sum);
}*/

/*float sum(void);
void main()
{
    sum();
}

float sum(void)
{
    float a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",sum);
}*/


//float sum(void);
/*void main()
{
    sum();
}

int sum(void)
{
    float a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",sum);
}*/

char fun();

void main()
{
    char ch;
    ch=fun();
    printf("ch=%c",ch);
}
char fun()
{
    char c;
    printf("Enter a char: ");
    scanf("%c",&c);
    return 'c';  // here return c only even if we take input anything, if only c then return our inp which we have take
}



