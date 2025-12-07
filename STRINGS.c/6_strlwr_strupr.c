#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    printf("Enter string: ");
    gets(s1);
    strlwr(s1);
    printf("String is: %s\n",s1 );
    strupr(s1);
    printf("string is:%s",s1);
    return 0;

}