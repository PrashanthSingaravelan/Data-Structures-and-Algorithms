#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;	
}*first=NULL,*last=NULL;

Insert(int element)
{
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=element;
	t->next=NULL;
	
	// If No Nodes are created
	if(first==NULL) 	{ first=last=t;	}
	
	// If Nodes are created
	else 
	{
		last->next=t;
		last=t;		
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
	Insert(4);
	Insert(5);
	
	Display(first);
}
