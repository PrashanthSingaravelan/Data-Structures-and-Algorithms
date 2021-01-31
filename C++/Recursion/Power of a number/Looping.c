#include<stdio.h>
int main()
{
    int m,n,i,ans=1;
    printf("Enter a number and its power term : ");
    scanf("%d%d",&m,&n);

    for(i=0;i<n;i++)
    {
        ans=ans*m;
    }

    printf("The answer is : %d",ans);
}
