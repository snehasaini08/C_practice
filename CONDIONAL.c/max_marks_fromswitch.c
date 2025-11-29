#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    switch(marks/10)
    {
        
         case 10:
         case 9:
         case 8:
            printf("Grade A");
            break;
        case 7:
            printf("Grade B");
        case 6:
            printf("Grade C");
            break;
            default:printf("Grade D");
    }
    return 0;
}

