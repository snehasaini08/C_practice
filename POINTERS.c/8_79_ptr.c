#include<stdio.h>
int main()
/*{
    int a=-11;
    int *p=&a;
    *p=10; //after using const give error
    printf("%d",a);
    return 0;
    
}*/

{
    char str[]="welcome to jenny's lectures";
    char *ptr;
    ptr=str;
    printf("%c\n",*ptr);
    printf("%c\n",*(ptr++ + 1));
    printf("%c\n",*((ptr-- +5)-1)+3);
    printf("%c\n",*(++ptr +10)-32);
    printf("%c %c %c\n",*ptr,*++ptr,*--ptr);
    return 0;
}