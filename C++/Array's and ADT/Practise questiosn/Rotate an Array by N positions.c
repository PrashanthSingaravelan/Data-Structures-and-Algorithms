#include<stdio.h>

struct Array
{
	int A[10];
	int size;	 // Size of an array
    int length;  // Number of elements in an array
};

void Rotate(struct Array obj,int n)
   {
 	 int i;
 	 int B[10];
 	 printf("Before %dth position : ",n);
 	  for(i=0;i<=n;i++)           { printf("%d ",obj.A[i]); B[i+n+1]=obj.A[i]; }
 	 printf("\nAfter %dth position : ",n);
	  for(i=n+1;i<obj.length;i++) { printf("%d ",obj.A[i]); B[i-n-1]=obj.A[i];} 
	  
	  printf("\n");
	  int k;
	  for(k=0;k<obj.length;k++)
	   {
	   	printf("%d ",B[k]);
	   }
   }

int main()
{
	struct Array obj={{12,23,34,45,56,67,78,89,90,100},10,10};
	
	int n;
	printf("Enter the position : ");
    scanf("%d",&n);
	
	Rotate(obj,n);	
}
