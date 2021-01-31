#include<stdio.h>
int Power(int n,int m)
{
    if(m==0) return 1;
    else
        return Power(n,m-1)*n;
}
int main()
{
   int n,m;
   printf("Enter a number and its power : ");
   scanf("%d%d",&n,&m);

   printf("Answer : %d",Power(n,m));
   return 0;
}
