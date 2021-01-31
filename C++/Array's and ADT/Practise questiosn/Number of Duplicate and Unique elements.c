#include<stdio.h>

struct Array
{
	int A[10];
	int length; // Number of elements in an array
	int size;   // Size of a array
};

int Duplicate(struct Array obj)
  {
  	int count=0;
  	int i,j;
  	
  	for(i=0;i<obj.length;i++)
  	 {
  	 	int compare=obj.A[i];
  	 	for(j=i+1;j<obj.length;j++)
  	 	{ 
		   if(compare==obj.A[j]) 
		   { 
		     count=count+1;
		     break;
		   }   
		}               
	 }
  	return count;
  }
  
int main()
 {
 	struct Array obj={{12,12,34,34,56,67},6,10};
 	printf("%d ",Duplicate(obj)); 	
 }
