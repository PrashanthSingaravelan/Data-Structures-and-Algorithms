#include<stdio.h>
#include<conio.h>

void Display(int A[],int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

void Merge(int A[],int low,int middle,int high)
{
	int	i = low;
	int j = middle+1;
	int k = low;
	int B[100];//int B[high+1];

	// Comparing the elements and putting into the 2nd array
	while(i<=middle && j<=high)
	{
		if(A[i]<A[j])
			B[k++] = A[i++];
		else
			B[k++] = A[j++];
	}

	// if one array completes traversing, the other array elements can be directly copied into the main merged sorted array
	for(;i<=middle;i++)
		B[k++] = A[i];
	for(;j<=high;j++)
		B[k++] = A[j];

	// At-last copy the second array which is the merged and sorted into the 1st array
	for(i=low;i<=high;i++)	
		A[i] = B[i];
}

void Merge_Sort(int A[],int n)
{
	int i,p;
	int low,middle,high;

	for(p=2;p<=n;p=p*2)  // for passes
	{
		for(i=0;i+p-1<n;i=i+p)  
		{
			low = i;
			high = i+p-1;
			middle = (low+high)/2;
			Merge(A,low,middle,high);
		}
		
		printf("p : %d",p);
		printf("\n");
		Display(A,n);
	}
	
	if(p/2<n)  /*Odd number of elements in the list (or) list is not in the powers of 2*/
	{
	    Merge(A,0,(p/2)-1,n);
	}
}

int main()
{
	int A[] = {10,8,3,7,4,9,2,6,5},n=9;
	
	printf("Array before sorting : ");
	Display(A,n);

	Merge_Sort(A,n);

	printf("Array after sorting : ");
	Display(A,n);

	return 0;
}