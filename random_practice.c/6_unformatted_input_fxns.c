#include<stdio.h>
//getchar()
/*int main()
{
    char ch;
    ch=getchar();
    printf("%c",ch);
    return 0;
}*/

//getch()

/*int main()
{
    char ch;
    ch=getch();
    printf("ch=%c",ch);
    return 0;
}*/
//getche()

/*int main()
{
    char ch;
    ch=getche();
    printf("\nch=%c",ch);
    return 0;
}*/

//gets()

int main()
{
    char ch[20];
    gets(ch);
    printf("ch=%s",ch);
    return 0;
}
