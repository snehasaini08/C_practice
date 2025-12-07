#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s1[30];
    printf("Enter string: ");
    gets(s1);
    //strlwr(s1);
    for(i=0;s1[i]!='\0';i++)
   {
    if(s1[i]>='A' && s1[i]<='Z')
    {
        s1[i]=s1[i]+32;
    }
  }
  printf("String in lowercase is: %s\n",s1 );
  //in uppercase too
  for(i=0;s1[i]!='\0';i++)
  {
    if(s1[i]>='a' && s1[i]<='z')
    {
        s1[i]=s1[i]-32;
    }
  }
  printf("String in uppercase is: %s\n",s1 );

    return 0;
}