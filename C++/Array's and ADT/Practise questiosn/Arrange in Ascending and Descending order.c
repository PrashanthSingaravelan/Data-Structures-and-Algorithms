#include<stdio.h>
struct Array
{
	int A[5];
	int length; // Number of elements in an array
	int size;   // Size of a array
};

void Swap(int *x,int *y)
{
	int temp=*y;
	*y=*x;
	*x=temp;	
}
// Bubble Sort
void Ascending(struct Array *obj)
{
	int i,j;
	for(i=0;i<obj->length;i++)
     {
     	for(j=0;j<obj->length-1;j++) { if(obj->A[j] > obj->A[j+1]) { Swap(&obj->A[j],&obj->A[j+1]);  } }
	 }
}

void Descending(struct Array *obj)
{
	int i,j;
	for(i=0;i<obj->length;i++)
     {
     	for(j=0;j<obj->length-1;j++) { if(obj->A[j] < obj->A[j+1]) { Swap(&obj->A[j+1],&obj->A[j]);  } }
	 }
}

void Display(struct Array obj)
{
	int i;
	for(i=0;i<obj.length;i++)
	  {
	  	printf("%d ",obj.A[i]);
	  }
}

int main()
 {
 	struct Array obj={{8,7,3,5,2},5,5};
     Ascending(&obj);
     printf("Ascending order : ");
     Display(obj);
     
     Descending(&obj);
     printf("\nDescending order : ");
     Display(obj);
	 	
}
