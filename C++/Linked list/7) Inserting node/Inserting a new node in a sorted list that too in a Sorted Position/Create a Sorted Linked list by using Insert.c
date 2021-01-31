#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;	
}*first=NULL;

void SortedInsert(struct Node *ptr,int element)
{
	struct Node *qtr=NULL;
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=element;
	t->next=NULL;
	
	if(first==NULL) { first=t; }
	else
	 {
	 	while(ptr && ptr->data < t->data)
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
	 	  	  	t->next=qtr->next;
	 	  	  	qtr->next=t;
	          }
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
	SortedInsert(first,10);
	SortedInsert(first,5);
	SortedInsert(first,50);
	
	Display(first);
}
