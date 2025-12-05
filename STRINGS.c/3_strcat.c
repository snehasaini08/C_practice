#include<stdio.h>
#include<string.h>
int main()
/*{
    int l1,l2,i;
    char s1[6]="jenny";
    char s2[7]="khatri";
    strcat(s1,s2);

    //l1=strlen(s1);
    //l2=strlen(s2);
    //for(i=0;i<=12;i++)
    //{
        //s1[l1+1]=s2[i];
    //}
    printf("String after concatenation is:%s\n",s1);
    puts(s2);
    return 0;
}*/

/*{
    int l1,l2,i;
    char s1[30]="jenny";
    char s2[7]="khatri";

    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("String after concatenation is:%s\n",s1);
    puts(s2);
    return 0;
}*/

{
    int l1,l2,i;
    char s1[30]="jenny";
    char s2[7]="khatri";
    strncat(s1,s2,3);

    //l1=strlen(s1);
    //l2=strlen(s2);
   // for(i=0;i<=l2;i++)
    //{
    //    s1[l1+i]=s2[i];
    //}
    printf("String after concatenation is:%s\n",s1);
    puts(s2);
    return 0;
}

