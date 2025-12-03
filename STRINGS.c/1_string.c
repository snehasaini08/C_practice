#include<stdio.h>
int main()
/*int main()   //1
{
    char name[30]="Sneha";
    printf("%s",name);
    return 0;

}*/


/*int main()   //2
{
    char name[30]="Sneha Sneha";
    printf("%s",name);
    return 0;

}*/

/*int main()   //3
{
    char name[30]={'s','n','e','h','a','\0'};
    printf("%s",name);
    return 0;

}*/

/*int main()   //4
{
    char name[30]="Sneha Sneha";
    printf("Enter name: ");
    scanf("%s",name);
    printf("%s",name);
    return 0;

}*/

/*int main()   //5
{
    char name[30];
    printf("Enter name: ");
    scanf("%s",name);
    printf("%s",name);
    return 0;

}*/

//6
/*{
    char fname[30],lname[30];
    printf("Enter name: ");
    scanf("%s%s",fname,lname);
    printf("%s %s",fname,lname);
    return 0;

}*/

//7
/*{
    char name[30];
    printf("Enter name:");
    gets (name);
    printf("%s",name);
    return 0;
}*/

                //8
/*{
    char name[30];
    printf("Enter name:");
    gets (name);
    printf("%s",name);
    puts(name);   
    puts(name);   //puts automatically adds new line 
    return 0;
}
*/
           //9
/*{
    char name[30];
    printf("Enter name:");
    gets (name);
    printf("%.5s\n",name);
    printf("%10.5s\n",name);
    puts(name);   
    puts(name); 
    return 0;
}*/

//10
/*{
    char name[30];
    printf("Enter name:");
    scanf("%5s",name);
    //gets (name);
    printf("%.5s\n",name);
    printf("%10.5s\n",name);
    puts(name);   
    puts(name);     //puts also  reading till 5 characters because in scanf only we've declared %5s
    return 0;
}*/

//11
{
    char name[30];
    printf("Enter name:");
    //scanf("%5s",name);
    gets (name);
    //printf("%.5s\n",name);
    //printf("%10.5s\n",name);
    printf("%s",&name[2]);  //were providind address of 2nd elements i.e.&name[2] so it will print from that elemnet
    //puts(name);   
    //puts(name);  
    return 0;
}