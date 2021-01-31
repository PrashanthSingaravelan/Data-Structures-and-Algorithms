#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;	
}*head;

void Create(int A[],int n)
{
	struct Node *last;
	head=(struct Node*)malloc(sizeof(struct Node));	
	head->data=A[0];
	head->next=head;
	last=head;
	
	int i;
	for(i=1;i<n;i++)
	{
		struct Node *t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=last->next;
		last->next=t;
		last=t;
	}
}
		
void Display(struct Node *ptr)
 {
 	do
 	{
 		printf("%d ",ptr->data);
 		ptr=ptr->next;
	 }while(ptr!=head); 	
 }
 
 void RecursiveDisplay(struct Node *ptr)
{
	static int flag=0;
    if(flag==0 || ptr!=head)
	{
		flag=1;
		printf("%d ",ptr->data);
		RecursiveDisplay(ptr->next);
	}	
}

void Insert(struct Node *ptr,int position,int element)
{
	if(position==0)
	  {
	  	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	    t->data=element;
	    t->next=NULL;
	
	  	if(head==NULL)        // If there is No Head in the Linked List
	  	{
	  		head       = t;          // Create a head node and point to itself
	  		head->next = head;
		}
		else                 // Or Create at 0th position
		{
			while(ptr->next!=head) { ptr=ptr->next; }
			ptr->next=t;
			t->next=head;
			head=t;
		}
	 }
	else       // Inserting at any other position 
	    {
	    	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	        t->data=element;
	        t->next=NULL;
	        
	    	int i;
	    	for(i=0;i<position-1;i++) 
			{ ptr=ptr->next; }
	    	t->next   = ptr->next;
	    	ptr->next = t;
	    }
}


 
 int main()
 {
 	int A[5]={12,23,34,45,56};
 	Create(A,5);
 	
 	printf("Before Inserting : ");
 	Display(head);
 	
 	Insert(head,4,100);
 	
 	printf("\nAfter Inserting  : ");
 	RecursiveDisplay(head);
 }
