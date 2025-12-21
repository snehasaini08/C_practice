#include<stdio.h>
void modify(char[],char[]);
//or void modify(char*,char*);
void main()
{
    char str1[]="sneha";
    char str2[]="saini";
    modify(str1,str2);
}

void modify(char str1[],char str2[])
//or void modify(char *str1,char *str2)
{
    int i,l=0;
    for(i=0;str1[i]!='\0';i++)
    {
        l=l+1; //orl++
    }
    str2[1]='z';
    printf("Length of string1 is=%d\n",l);
    printf("Modified string2 is=%s\n",str2);
}