#include<stdio.h>
#include<string.h>
int main()
/*{
    int value;
    char s1[30],s2[30];
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    value=strcmp(s1,s2);
    if(value==0)
       printf("same");
    else
        printf("Not same");
        return 0; 
    
}*/

//without strcmp
{
    int value=0,i;
    char s1[30],s2[30];
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    //value=strcmp(s1,s2);
    for(i=0;s1[i]!='\0' ||  s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            value=1;
            break;
        }
    }
    if(value==1)
       printf("not same");
    else
        printf("same");
return 0; 
    
}
