#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
    printf("Enter rows and colums of first matrix: \n");
    scanf("%d %d",&m,&n);

    printf("Input is : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix:\n");
    scanf("%d %d",&p,&q);

    printf("Input is : ");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nFirst matrix is :\n  ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

     printf("\nSecond matrix is :\n  ");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //As we know the for multiplication ( col of 1st matrix{n} = row of second matrix{p}
    if(n!=p)
    {
        printf("matrix cannot multiply");
    }
    else{
        for(i=0;i<m;i++) //m=no of rows of 1st matrix
        {
            for(j=0;j<q;j++) //q=no of col of 2nd mat
            {
                sum=0;
                for(k=0;k<n;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
                //scanf("%d",&a[i][j])
            }
        }
        printf("Multiplication is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
    
}