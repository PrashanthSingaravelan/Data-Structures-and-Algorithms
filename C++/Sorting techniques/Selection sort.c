#include<stdio.h>
#include<conio.h>

void Display(int A[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

void Swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Selection_sort(int A[],int n)
{
	int i,j,k;
	for(i=0;i<n-1;i++)  // for passes 
	{
		for(j=k=i;j<n;j++)
		{
			if (A[j]<A[k])
			{   k=j; }
		}
		Swap(&A[i],&A[k]);  // After j goes to the end, k holds the minimum element, shift k and i
	}
}

int main()
{
	int A[] = {10,30,20,5,11,100,90,45};
	int n = 8;

	printf("The elements before sorting : ");
	Display(A,n);

	Selection_sort(A,n);

	printf("The elements after sorting : ");
	Display(A,n);

	return 0;
}