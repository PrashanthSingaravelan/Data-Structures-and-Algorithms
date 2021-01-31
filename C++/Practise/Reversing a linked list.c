#include<stdio.h>
#include<stdlib.h>

struct Node
 {
 	int data;
 	struct Node *next; 	
 }*first=NULL;
 
 void Create(int A[],int size)
  {
  	struct Node*last,*t;
  	first=(struct Node*)malloc(sizeof(struct Node));
  	first->data=A[0];
  	first->next=NULL;
  	last=first;
	 
	 int i;
	 for(i=1;i<size;i++)
	   {
	   	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	   	t->data=A[i];
	   	t->next=NULL;
	   	last->next=t;
	   	last=t;
	   }
}

void Display(struct Node *ptr)
 {
 	while(ptr!=NULL)
 	 {
 	 	printf("%d",ptr->data);
 	 	ptr=ptr->next;
	 } 	
 }
 
void Reverse(struct Node *p)
{
	struct Node *q=NULL;
	struct Node *r=NULL;
	
	while(p!=NULL)
	  {
	  	r=q;
	  	q=p;
	  	p=p->next;
	  	q->next=r;	  	
	  }
	  first=q;
}
	   	
int main()
 {
 	int n,i;
 	printf("Enter the size of the array : ");
 	scanf("%d",&n);
 	int A[n];
 	printf("Enter the array elements : ");
 	for(i=0;i<n;i++)
 	 {
 	 	scanf("%d",&A[i]);
	 }
 	
 	Create(A,n);
 	printf("\nBefore Reversing : ");
	Display(first);
 	Reverse(first);
 	printf("\nAfter Reversing : ");
	Display(first);
 }
