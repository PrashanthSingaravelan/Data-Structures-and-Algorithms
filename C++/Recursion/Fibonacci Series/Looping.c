#include<stdio.h>
int main()
{
    int i,n,t0=0,t1=1,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
       printf("The Sum is : %d",sum);
}

