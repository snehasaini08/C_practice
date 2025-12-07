#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    printf("Enter string: ");
    fgets(s1,sizeof(s1),stdin);
    strrev(s1);
    printf("Reversed string is:%s\n",s1);
    return 0;
}