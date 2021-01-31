#include<stdio.h>

void Swap(int *x,int *y)
 {
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
 }

void Selection_Sort(int A[],int n)
  {
      int i,j,k;
      for(i=0;i<n-1;i++) // Loop for passes
      {
          for(j=k=i;j<n;j++) // Loop for j to traverse
          {
              if(A[j]<A[k])
              k=j;           // After j finds the smallest,it will bring k over there
          }
    // After the entire traversal of j, Swap Kth position element to Ith position
    Swap(&A[i],&A[k]);
      }
  }

   int main()
{
int A[]={11,13,7,12,16,19,24,5,10,20},n=10,i;
Selection_Sort(A,n);
for(i=0;i<10;i++)
{
     printf("%d ",A[i]);
     printf("\n");
}
return 0;
}




