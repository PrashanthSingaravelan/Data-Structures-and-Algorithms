#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10];
	int length;
	int size;	
};

int Iterative_BinarySearch(struct Array obj,int key)
{
	int l,mid,h;
	l=0;
	h=obj.length-1;
	while(l<=h)
	  {
	  	mid=(l+h)/2;
	  	if(key==obj.A[mid]) { return mid;}
	  	else if(key>obj.A[mid]) { l=mid+1;}
	  	else if(key<obj.A[mid]) { h=mid-1;}
	  	else return -1;
	  }
}

int Recursive_BinarySearch(int a[],int l,int h,int key)
{
	int mid=0;
	if(l<=h)
	  {
	  	mid=(l+h)/2;
	  	if(key==a[mid]) { return mid;}
	  	else if(key<a[mid]) { return Recursive_BinarySearch(a,l,mid-1,key); }
	  	else if(key>a[mid]) { return Recursive_BinarySearch(a,mid+1,h,key); }
	  }
	  else {return -1;}
}

int main()
{
	struct Array obj={{10,12,23,34,45,56,67,78,89,90},10,10};
	printf("%d",Iterative_BinarySearch(obj,45));
	printf("%d",Recursive_BinarySearch(obj.A,0,obj.length-1,78));
}

