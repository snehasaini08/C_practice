#include<stdio.h>
void check_prime(int n)
{
    for(int i=2 ; i<n/2 ;i++ )
    {
        if(n%i==0)
        {
            printf("Not prime \n");
            return;
        }
    }
    printf("Prime\n");
    return;
}

int lcm(int a,int b)
{
    for(int i=a ; i<=a*b ; i++ )
    {
        if(i%a==0 && i%b==0)
        {return i;
        }
    }
}

int hcf( int a,int b)
{
    for( int i=a ; i>0 ; i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
}
int main()
{
int a,b,lcm1,hcf2;
printf("Enter the a and b: ");
scanf("%d%d",&a,&b);

check_prime(a);
check_prime(b);
lcm1=lcm(a,b);
hcf2=hcf(a,b);
printf("LCM =%d\n",lcm1);
printf("HCF =%d\n",hcf2);
return 0;
}


