//without the condition l-1-i.
#include<stdio.h>
#include<string.h>
int main()
{   int l,i,j;
    char c;
    char s1[30];
    printf("Enter a string:");
    //gets(s1);   //giving boxes in gets 
    //scanf("%s",s1);
    fgets(s1, sizeof(s1), stdin);
    l=strlen(s1);
    for(i=0,j=l-1;i<j;i++,j--)
    {
        c=s1[i];
        s1[i]=s1[j];
        s1[j]=c;
    }
    /*{
        c=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=c;
    }*/
    printf("%s",s1);
    return 0;
}