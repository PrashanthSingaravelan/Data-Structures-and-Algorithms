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

int Index(struct Node *ptr,int element)
{
	int i,index=0;
	for(i=0;i<5;i++)
	{
		if (ptr->data==element) { break; }
		else
		{ 	
		   index  += 1;
		   ptr     = ptr->next;
		}
	}
	index+=1;
	return index;	
}

int Delete(struct Node *ptr,int element)
{
	int index=Index(ptr,element);
	struct Node *qtr;
	int i,x;

	// Checking the Validity of the index
	if(index< 0 || index>5) { return -1;	}

	// Code for the Deleting the head node
	if(index==1) // If we want to delete the 1st index
	{
		// Move a pointer upto the last,
		while(ptr->next!=head)  { ptr = ptr->next; }
		printf("ptr : %d ",ptr->data);
		x = head->data;

		// After moving the pointer, it is neccessary to check whether there are any other node

		// If there is only head node

			if(head == ptr) // The pointer will move and be at the Head node itself
			  {
				free(head);
				head=NULL;
			  }
			// If there are some other node
			else
			   {
				ptr->next = head->next;
				free(head);
				head      = ptr->next;
			   }
	}
	 
// Checking for deleting nodes other than Head Node
    else 
    {
    	for(i=0;i<index-2;i++) { ptr=ptr->next; }
    	qtr       = ptr->next;
    	ptr->next = qtr->next;
    	x         = qtr->data;
    	free(qtr);
	}
	return x;    	
}


int main()
 {
 	int A[5]={12,23,34,45,56};
 	Create(A,5);

 	printf("Before Deleting : ");
 	Display(head);
 	Delete(head,12);

 	printf("\nAfter Deleting  : ");
 	RecursiveDisplay(head);
 }
