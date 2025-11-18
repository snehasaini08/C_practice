#include<stdio.h>
//with integer
/*int main()
{
    int i=0;
    while(i++)
    {
    printf("%d\n",i);
    }
    printf("End of Program\n");
    return 0;
}*/

//with charater
int main()
{
    int i=0;
    char ch='a';
    while(ch<127 && i==0)
    {
    printf("%d\n",ch);
    ch--;
    }
    printf("End of Program\n");
    return 0;
}

