//write a program to print days by using switch case statement but by using char datatype.
#include<stdio.h>
int main()
{
    char day;
    printf("enter the day :- ");
    scanf("%s",&day);

    switch(day) {
        case 'm': printf("MONDAY");
                 break;
        case 't':  printf("TUESDAY");
                 break;
        case 'w': printf("WEDNESDAY");
                 break;
        case 'T': printf("THURSDAY");
                 break;
        case 'f': printf("FRIDAY");
                 break;
        case 's': printf("SATURDAY");
                 break;
        case 'S': printf("SUNDAY");
                 break;
        default :printf("INVALID");
                 
                 return 0;
    }          
}

/*#include<stdio.h>
int main()
{
    int day;
    printf("Enter the Day(1-7) = ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("monday \n");
        break;
        case 2 :printf("tuesday \n");
        break;
        case 3 : printf("wednesday\n");
        break;
        case 4:printf("thursday\n");
        break;
        case 5:printf("friday\n");
        break;
        case 6:printf("saturday\n");
        break;
        case 7:printf("sunday");
        break;
        default:printf("invalid");
}
 return 0;
}*/
