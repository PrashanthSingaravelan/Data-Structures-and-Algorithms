#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int size;	 // Size of the array
    int length;  // Number of elements in an array
};

void Swap(int *x,int *y)
 {
 	int temp=*y;
 	*y=*x;
 	*x=temp; 	
 }

void InsertSorted(struct Array *obj,int element)
  {
  	// Check whether any free space is available or not for shifting the elements
  	if(obj->size==obj->length) return;
    int i=obj->length-1;
  	while(i>=0 && obj->A[i]>element) 
	  { 
	    obj->A[i+1]=obj->A[i];
	    i--;
	  }
  	obj->A[i+1]=element; 
	obj->length++;  // Array length is also increased	
  }

int IsSorted(struct Array obj)  // Check Whether an array is sorted or Not???
 {
 	int i;
 	for(i=0;i<obj.length-1;i++)
      { if(obj.A[i] > obj.A[i+1]) { return 0; }  } // If the condition is true, return statement will be executed.
	return 1;	                              // And the rest of the statements outside the loop will not be exceuted.
	
	// Normally after the for loop ends,the statments outside the loop will be executed
	// But return statement does not execute like a normal statement.
// Since only one return statement will be returned back to the function call
// There may be multiple return statements in a functions but only one return statements will be returned back to the function call

 }

void NegateonLeftPositiveonRight(struct Array *obj)
 {
 	int i=0;
 	int j=obj->length;
 	
 	while(obj->A[i]<0) i++;
 	while(obj->A[j]>=0) j--;
 	if(i<j) { Swap(&obj->A[i],&obj->A[j]);}
 }
 
void Display(struct Array obj)
{
	int i;
	for(i=0;i<obj.length;i++) { printf("%d ",obj.A[i]); }
}

int main()
{
	struct Array obj={{10,-11,34,45,-56},10,5};
	NegateonLeftPositiveonRight(&obj);
	Display(obj);
	
	//printf("%d",IsSorted(obj));
	
	//InsertSorted(&obj,6);
	//printf("\nAfter Inserting : ");
	//Display(obj);
	
}
