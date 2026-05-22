#include<stdio.h>
int main()
{
    char alp;
    printf("enter alphabet= ");
    scanf("%c",&alp);
    if((alp>='a' && alp<='z') || (alp>='A' && alp<='Z'))
    printf("Alphabet");
    else
    printf("Not alphabet");
    return 0;
}