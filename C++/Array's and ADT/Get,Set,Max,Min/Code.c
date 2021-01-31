#include<stdio.h>
#include<stdlib.h>

struct Array
 {
 	int A[10]; 
 	int size;
 	int length;		
 };
 
void Set(struct Array *obj,int index,int element)
{
  	int i;
  	if(index>=0 && index<=obj->length);
  	{ for(i=0;i<obj->length;i++) { if(i==index) {obj->A[i]=element;} } }
}

int Get(struct Array obj,int element)
 {
   	int i;
   	for(i=0;i<obj.length;i++)
   	 { if(obj.A[i]==element) { return i;}  } 	
 }
 
void Display(struct Array obj)
   {
   	 printf("The Array elements are : ");
	 int i;
	 for(i=0;i<obj.length;i++) { printf("%d ",obj.A[i]); }   	
   }
 
 
 
 int main()
 {
 	struct Array obj={{11,12,13,14,15,16,17,18,19,20},10,10};
 	
	printf("Before Set : \n");
	Display(obj);
    Set(&obj,4,100);
    printf("\nAfter Set : \n");
	Display(obj);
	
	printf("\nThe get element is : %d",Get(obj,16));
    
     
 }
 
