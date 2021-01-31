#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;	
}*first=NULL;

void Create(int A[],int n)
{
	struct Node *last,*t;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	int i;
	for(i=1;i<n;i++)
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
	while(ptr)
	{
	  printf("%d ",ptr->data);
	  if(ptr->next!=NULL) { ptr=ptr->next->next; }
	  else  { break; }
	  } 
}

int main()
{
	int A[]={10,20,30,40};
	Create(A,5);
	Display(first);
	
	
	
}
