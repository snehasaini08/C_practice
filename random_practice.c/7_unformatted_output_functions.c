#include<stdio.h>
#include<conio.h>

//putchar() or putch()= both are same only header difference
/*int main()
{
    char ch;
    printf("Enter a charater: ");
    ch=getchar();
    //printf("\n char is =%c",ch);
    putchar(ch); //cant take \n along with it so req to use another putchar
    putchar('\n'); //cursor will go to next line
    putchar('h');
    return 0;

}*/
//puts()
int main()
{
    char ch[20];
    puts("Enter a string: "); //or printf("Enter a string: ");
    gets(ch);
    puts(ch); //or printf("\nchar is = %s",ch); 
    return 0;
}