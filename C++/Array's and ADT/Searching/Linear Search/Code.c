#include<stdio.h>
#include<stdlib.h>

struct Array
  {
  	int A[10];
  	int size;
  	int length;  	
  };
  
void Swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;	
}

void Static_LinearSearch(struct Array obj,int key)
 {
 	int i;
 	for(i=0;i<obj.length;i++)
 	 {
 	  	if(key==obj.A[i]) { printf("The element %d is found at the index %d",key,i);}
	 }	
 }
 // Since we are modifying the original array, we should use pointer
 void Static_Transposition(struct Array *obj,int key)
 {
     int i;
     printf("\nThe array elements before Transposition: ");
 	 for(i=0;i<obj->length;i++)
     {
     	printf("%d ",obj->A[i]);
	 }
 	
 	for(i=0;i<obj->length;i++)
 	 {
 	 	if(key==obj->A[i]) { Swap(&obj->A[i-1],&obj->A[i]); }	
     }
     
     printf("\nThe array elements after Transposition: ");
     for(i=0;i<obj->length;i++)
     {
     	printf("%d ",obj->A[i]);
	 }
 }
 
 void Static_MoveToFront(struct Array *obj,int key)
 {
     int i;
     printf("\nThe array elements before Movetofront : ");
 	 for(i=0;i<obj->length;i++)
     {
     	printf("%d ",obj->A[i]);
	 }
 	
 	for(i=0;i<obj->length;i++)
 	 {
 	 	if(key==obj->A[i]) { Swap(&obj->A[0],&obj->A[i]); }	
     }
     
     printf("\nThe array elements after Movetofront : ");
     for(i=0;i<obj->length;i++)
     {
     	printf("%d ",obj->A[i]);
	 }
 }
 	 
int main()
{
	// Static Array
	struct Array obj={{1,2,3,4,5},10,5};
	
	//Static_LinearSearch(obj,3);
	//Static_Transposition(&obj,3);
	Static_MoveToFront(&obj,3);
	
	
}
