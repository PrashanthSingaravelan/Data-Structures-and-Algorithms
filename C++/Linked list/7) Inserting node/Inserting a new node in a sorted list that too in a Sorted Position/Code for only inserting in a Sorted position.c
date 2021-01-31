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
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void SortedInsert(struct Node *ptr,int element)
 {
	struct Node *qtr=NULL;
	
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=element;
	t->next=NULL;
	
	int i;
	while(ptr && ptr->data<t->data)
	{
		qtr=ptr;
		ptr=ptr->next;		
	}
	     if(ptr==first)
	       {
		     t->next=first;
		     first=t;
	       }
	         else
	           {
	             qtr->next=t;
	             t->next=ptr;
               }
 }

void Display(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}	
}

int main()
{
	int A[]={12,23,34,56,78};
	Create(A,5);
	printf("Before Inserting : ");
	Display(first);
	
	SortedInsert(first,5);
	printf("\nAfter Inserting  : ");
	Display(first);
}
