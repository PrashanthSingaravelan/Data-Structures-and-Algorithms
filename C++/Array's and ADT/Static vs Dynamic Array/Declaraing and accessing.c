#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i;

// Static Array
int A[5]={2,4,6,8,10};
for(i=0;i<5;i++)
  {
    printf("%d  ",A[i]);
  }

printf("\n");

// Dynamic Array
int *ptr=(int*)malloc(5*sizeof(int));
ptr[0]=1;
ptr[1]=3;
ptr[2]=5;
ptr[3]=7;
ptr[4]=9;

for(i=0;i<5;i++)
  {
    printf("%d  ",ptr[i]);
  }
}
