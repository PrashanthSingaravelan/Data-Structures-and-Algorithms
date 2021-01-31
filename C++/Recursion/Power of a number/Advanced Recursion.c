#include<stdio.h>

int Power(int m,int n)
{
    if(n==0) return 1;
    else if(n%2==0) return Power(m*m,n/2);
    else return m*Power (m*m,(n-1)/2);
}
int main()
{
    int n,m;
    printf("Enter a number and its power : ");
    scanf("%d%d",&m,&n);

    printf("Answer : %d",Power(m,n));
}
