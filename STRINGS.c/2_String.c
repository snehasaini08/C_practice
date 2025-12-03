#include<stdio.h>
#include<string.h>
//int main()
/*{
    char name[30];
    int count=0,i=0;
    printf("Enter name: ");
    gets(name);
    count=strlen(name);
    puts(name);
    printf("length of string is:%d",count);
    return 0;

}*/

int main()
{
    char name[30];
    int count=0,i=0;
    printf("Enter name: ");
    gets(name);
    //count=strlen(name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    puts(name);
    printf("length of string is:%d",count);
    return 0;

}