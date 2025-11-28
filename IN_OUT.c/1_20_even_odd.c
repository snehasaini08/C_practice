/*#include<stdio.h>
int main()
{
    int i=1;
    while(i<=20)
    {
        if(i%2!=0)   //for even (i%2==0) baki whole code will same
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
//Another code
#include<stdio.h>
int main()
{
    int i=2;  //for odd i=1 se start hoga
    while(i<=20)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}