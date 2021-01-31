#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

// Creating 1st Linked List
void Create(int A[],int n)
{
	struct Node *t,*last;
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

// Creating 2nd Linked List
void Create2(int A[],int n)
{
	struct Node *t,*last;
	second=(struct Node*)malloc(sizeof(struct Node));
	second->data=A[0];
	second->next=NULL;
	last=second;
	
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

// Merging two linked list
void Merge(struct Node *ptr,struct Node *qtr)
  {
  	struct Node *last;  // *last  : It is used for linking purpose
  	                    // *third : It holds the first node, at last we can mark first=third
  	// Condition only for first node
	if(ptr->data<qtr->data)
  	 {
  	  	last=third=ptr;
  	  	ptr=ptr->next;
  	  	last->next=NULL;
  	 }
  	else
	  {
	  	 last=third=second;
	  	 qtr=qtr->next;
	  	 last->next=NULL;
	   }
 
 // Condition only for first node
  // Conditions for the rest of the nodes
	 while(ptr && qtr)
      {  
	 	if(ptr->data<qtr->data)
	 	 {
	 	   last->next=ptr;
		   last=ptr;
		   ptr=ptr->next;
		   last->next=NULL;	 		
		 }
		else 
		  {
			last->next=qtr;
			last=qtr;
			qtr=qtr->next;
			last->next=NULL;
		  }	 	
	  }
	 
	 // Only one node will be left at last in any one of the linked list
	 
	 if(ptr!=NULL) last->next=ptr;
	 if(qtr!=NULL) last->next=qtr; 
	 first=third;
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
 	int A[]={12,23,34,45,56};
 	int B[]={21,32,43,54,65};
 	
 	Create(A,5);
 	Create2(B,5);
 	
 	Merge(first,second);
 	Display(first);
 }
