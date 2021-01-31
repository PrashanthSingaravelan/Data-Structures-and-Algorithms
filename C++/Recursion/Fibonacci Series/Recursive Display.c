#include<stdio.h>

int fib(int n)
{
    if(n<=1) {return n;}
    else
        return fib(n-2)+fib(n-1);
}


int main()
{
    int n,m;
   printf("Enter a number : ");
   scanf("%d",&n);

   printf("Answer : %d",fib(n));
}
