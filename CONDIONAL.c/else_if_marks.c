#include<stdio.h>
#include<conio.h>
/*int main()
{
    int m;//m=marks
    printf("Enter marks: ");
    scanf("%d",&m);
    if(m>80)
    printf("Grade is A");
    else if(m>70)
    printf("Grade is B");
    else if(m>60)
    printf("Grade is C");
    else 
    printf("Grade is D");
    printf("End of the program");
    return 0;
}*/

int main()
{
    int m;//m=marks
    printf("Enter marks: ");
    scanf("%d",&m);
    if(m>80)
    printf("Grade is A");
    else{
        if(m>70)
        {
        printf("Grade is B");
        }
    
        else {
            if(m>60){
            printf("Grade is C");
           }
           else
           printf("Grade is D");
           
        }
    }
    
   printf("End of the program");
    return 0;
}