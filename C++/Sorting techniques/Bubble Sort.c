#include<stdio.h>
#include<conio.h>

void Swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Display(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",A[i]);
	printf("\n");
}

void Bubble_sort(int A[],int n)
{
	int i,j,flag;
	for(i=0;i<n-1;i++)  // For passes
	{
		flag=0;
		for(j=0;j<n-1-i;j++)  // For swapping 
		{
			if(A[j]>A[j+1]) 
			    {
			    	Swap(&A[j],&A[j+1]); 
					flag=1;
				}
		}
		if(flag==0)   // Indicates that there is no swapping 
			printf("The given elements are already sorted\n");
		    break;
	}
}

int main()
{
	int A[] = {1,2,3,4};
	int n = 4;
	
	printf("The given elements are : ");
	Display(A,n);
	
	Bubble_sort(A,n);
	
	printf("The Sorted elements are : ");
	Display(A,n);
	return 0;
}