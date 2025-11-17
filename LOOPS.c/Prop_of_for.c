#include<stdio.h>
//1.
/*int main()
{
    int i=1;
    for(  ;i<=5;i++)
    printf("%d \n",i);
    return 0;
}*/
//2.
/*int main()
{
    int i;
    for(i=1;i<=5;i++)
    printf("%d \n",i);
    return 0;
}*/
//3.
/*int main()
{
    int i,j=0;
    for( ;i<=5;i++)
    printf("%d%d\n",i,j);
    return 0;
}*/
//4.
/*int main()
{
    int i;
    for( i=10;i<10;i++)
    printf("%d\n",i);
    return 0;
}*/

//Expression 2
/*int main()
{
    int i,j;
    for(i=0,j=0;  ;i++)
    {
        printf("%d%d\n",i,j);
    }
}
*/
/*int main()
{
    int i,j;
    for(i=1,j=0;i<5,j<3;i++,j++)//without j++ it was going to an infinite loop
    {
        printf("%d%d\n",i,j);
    }
    return 0;
}*/
//or
/*int main()
{
    int i,j;
    for(i=1,j=0;i<=100,j<3;i++,j++)//without j++ it was going to an infinite loop
    {
        printf("%d%d\n",i,j);
    }
    return 0;
}*/

 /*int main()
{
    int i,j;
    for(i=1,j=0;i<=100 && j<3;i++,j++)
    {
        printf("%d%d\n",i,j);
    }
    return 0;
}*/


/*int main()
{
    int i,j;
    for(i=1,j=0;i<=100 || j<3;i++,j++)    //doubt in output
    {
        printf("%d%d\n",i,j);
    }
    return 0;
}*/
//Expression 3
/*int main()
{
    int i,j;
    for(i=1,j=0;i<=100 , j<3;)    //doubt in output
    {
        printf("%d%d\n",i,j);
        i++;
        j++;
    }
    return 0;
}*/

//2. if only uses i++ not j++

int main()
{
    int i,j;
    for(i=1,j=0;i<=100 , j<3;)    //doubt in output
    {
        printf("%d%d\n",i,j);  //loop going to infinite in this case but if doing j++ output is according to my dry run
        
        j++;
    }
    return 0;
}








