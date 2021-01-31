#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int length; // Number of elements in an array
	int size;   // Size of an array	
};

void Display(struct Array obj)
 {
 	int i;
 	for(i=0;i<obj.length;i++) { printf("%d ",obj.A[i]); } 	
 }
 
 
 struct Array* Merge(struct Array *obj1,struct Array *obj2)
 {
 	int i,j,k;  // i:Traversing array1 ;; j:Traversing array2 ;; k:Traversing array3
 	i=j=k=0;    // Initially all the three are staring from index 0
 	
 	// Since we want to return the merged array to the main() Create the array in HEAP 
 	// and the return type of that array 3 is struct array*
 	
 	struct Array *obj3=(struct Array*)malloc(sizeof(struct Array));
 	
 	while(i<obj1->length && j<obj2->length)
 	  {
 	  	if(obj1->A[i]<obj2->A[j])   obj3->A[k++]=obj1->A[i++];  
 	  	else obj3->A[k++]=obj2->A[j++];
 	  	// After copying all the elements, in any one of the array last element will be left idle,
 	  	// So copy that element in array 3
 	  }
 	  	for(;i<obj1->length;i++) obj3->A[k++]=obj1->A[i];  // Dont know where i and j are standing, so use for(;i<length;i++)
 	  	for(;j<obj2->length;j++) obj3->A[k++]=obj2->A[j];	  	
// Set size and length to the third array

obj3->length=obj1->length+obj2->length;
obj3->size=10;
return obj3;
}

int main()
{
	struct Array obj1={{12,23,34,45,56},5,10};
	struct Array obj2={{11,13,34,20,63},5,10};
	struct Array *obj3;
	
	obj3=Merge(&obj1,&obj2);
	
	Display(*obj3);
	
	
}
