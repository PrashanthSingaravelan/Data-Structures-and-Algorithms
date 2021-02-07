#include<stdio.h>
#include<conio.h>

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

int Binary_search(int A[],int element,int n)
{
	int low = 0;
	int high = n;
	int mid = 0;

	while(low<=high)
	{
		mid = (low+high)/2;
		if(A[mid]<element)       { low = mid+1; }  // consider's the right side
		else if(A[mid]>element)  { high = mid-1; } // consider's the left side
		else                  	 { return mid; }
	}
	return -1;
}

void Display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    int result;
	int A[] = {90,32,45,21,56,78,35,89,54,19},n=10;
	int element = 99;
	
	printf("Given array : ");
	Display(A,n);

	Selection_sort(A,n);
	
	printf("After sorting array : ");
	Display(A,n);

	result = Binary_search(A,element,n);

	if(result==-1)
	{  printf("\nElement not found");  	}
	else
	{  printf("\nElement is found"); 	}

	return 0;
}