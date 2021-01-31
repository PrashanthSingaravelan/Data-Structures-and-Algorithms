#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;	
}*first,*t1,*t2;

void Create(int A[],int n)
{
	struct Node *last;
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

struct Node * Shift(struct Node *ptr,int steps)
{
	ptr=first;
	
	int i;
	for(i=1;i<=steps;i++)
	{
		if(i!=steps) { ptr=ptr->next; }
	}
	return ptr;
}

void Display(struct Node *ptr)
{
   while(ptr!=NULL)
    {
 	  printf("%d ",ptr->data);
 	  ptr=ptr->next;
    }
}

int CheckforaLoop(struct Node *f)
{
	struct Node *ptr,*qtr;
	ptr=qtr=f;
	
	do
	{
		ptr=ptr->next;
		qtr=qtr->next;
		qtr= qtr?qtr->next:qtr;	     // if qtr is not equal to NULL it will remain over there	 
	}while(ptr!=NULL && qtr!=NULL && ptr!=qtr);
	
	if(ptr==qtr) { return 1;}
	else { return 0;}
}
	
int main()
{
	int A[]={12,23,34,45,67};
	Create(A,5);
	int n=5;
	
	t1=Shift(t1,3);  // Make a jump of 3 steps (t1->data : 34)
	t2=Shift(t2,5);  // Make a jump of 5 steps (t2->data : 67)
	
	// Important Turning Point Making a Loop
	t2->next =t1;  // (t2->next=t1(34))
	
	printf("%d ",CheckforaLoop(first));
}
	 

