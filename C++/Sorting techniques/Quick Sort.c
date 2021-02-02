#include<stdio.h>
#include<conio.h>
#include<limits.h>

void Display(int A[],int n)
{
	int i;
	for(i=0;i<n-1;i++)  // n-1 to avoid printing infinity
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

int partition(int A[],int low,int high)
{
	int pivot = A[low];
	int i = low;
	int j = high;

	do
	{
		do{   // if i<=pivot(move) , if i>pivot(stops)
			i++;
		  }while(A[i]<=pivot);  

		 do{ // if j>pivot(move) , if j<=pivot(stops)
			j--;
			}while(A[j]>pivot); 

		 if(j>i)
		 {
		 	Swap(&A[i],&A[j]);
		 }
	}while(j>i);

	Swap(&A[low],&A[j]);   // when j>i Swap(pivot(i.e low,j) , swap(50,40)
	return j;
}

void Quick_Sort(int A[],int low,int high)
{
	int j;
	if(low<high)
	{
		j = partition(A,low,high);
		
		// Quick sort to the list that is Smaller than 50 [low(40),high(50)]
		Quick_Sort(A,low,j);    

		// Quick sort to the list that is larger than 50 [low(80),high(inf)]
		Quick_Sort(A,j+1,high);
	}
}

int main()
{
	int A[]={50,70,60,90,40,80,10,20,30,INT_MAX},n=10;
	printf("Before Sorting : ");
	Display(A,n);

	Quick_Sort(A,0,n-1);

	printf("\nAfter Sorting : ");
	Display(A,n);
}