#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter the uppercase,lowercase,number or other symbolic char: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("UpperCase charater");
    else if(ch>='a' && ch<='z')
    printf("LowerCase Charater");
    else if(ch>'0' && ch<='9')
    printf("Numeric charater");
    else printf("Special Charater");
    return 0;

}