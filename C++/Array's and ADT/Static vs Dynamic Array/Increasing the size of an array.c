#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i;
 int*ptr=(int*)malloc(5*sizeof(int));
 ptr[0]=1;ptr[1]=3;ptr[2]=5;ptr[3]=7;ptr[4]=9;

 int*qtr=(int*)malloc(10*sizeof(int));

 for(i=0;i<5;i++)
 {
     qtr[i]=ptr[i];
 }
 free(ptr);
 ptr=qtr;
 qtr=NULL;

 for(i=0;i<5;i++)
 {
     printf("%d  ",ptr[i]);
 }
 return 0;
}
