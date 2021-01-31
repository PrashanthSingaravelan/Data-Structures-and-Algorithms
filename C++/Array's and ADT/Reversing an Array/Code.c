#include<stdio.h>

struct Array
{
	int A[5];
	int size;	 // Size of an array
    int length;  // Number of elements in an array
};

// Duplicate Reverse
void DuplicateReverse(struct Array obj)
{
  int i;
  for(i=obj.length-1;i>=0;i--)
    {
    	printf("%d ",obj.A[i]);
    }
}

// Original Reverse
void TwoArrayReverse(struct Array *obj)
  {
  	int B[obj->length];
  	int i,j;
  	
  	for(i=obj->length-1,j=0 ; i>=0,j<obj->length ; i--,j++) { B[j]=obj->A[i]; }
  	
  	for(i=0;i<obj->length;i++) { obj->A[i]=B[i]; }  	
  }
  
void Swap(int *x,int *y)
 {
 	int temp=*y;
 	*y=*x;
 	*x=temp; 	
 }
  
void OneArrayReverse(struct Array *obj)
 {
 	int i,j;
 	for(i=0,j=obj->length-1 ; i<=j ; i++,j--) 	{ Swap(&obj->A[i],&obj->A[j]); }
 }

void Display(struct Array obj)
{
	int i;
	for(i=0;i<obj.length;i++) { printf("%d ",obj.A[i]); }
}

int main()
{
	struct Array obj={{10,12,23,34,45},5,5};
	printf("The Main form of array    : ");
	Display(obj);
	
	printf("\nDuplicate Reverse of Array : ");	
	DuplicateReverse(obj);
	
	TwoArrayReverse(&obj);
	printf("\nThe Auxilary Reverse form of array : ");
    Display(obj);
    
    OneArrayReverse(&obj);    
    printf("\nThe Single Reverse form of array : ");
    Display(obj);
}




