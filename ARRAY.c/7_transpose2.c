#include<stdio.h>
int main()
{
    int a[2][3],b[3][2],i,j;
    printf("Enter elements of 2D array: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           b[j][i]=a[i][j];
        }   
    }

    printf("Reverse matrix is:\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            printf("%d\t",b[j][i]);
        }
        printf("\n");
    }
return 0;
}