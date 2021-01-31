#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
}*first=NULL,*second=NULL,*third=NULL;

int a=10;

void Create(int A[],int n)
 {
     int i;
     int a=15;
     printf("%d ",a);
     struct Node*t,*last;
     first=(struct Node*)malloc(sizeof(struct Node));
     first->data=A[0];
     first->next=NULL;
     last=first;

     for(i=1;i<n;i++)
     {
         t=(struct Node*)malloc(sizeof(struct Node));
         t->data=A[i];
         t->next=NULL;
         last->next=t;
         last=t;
     }
 }

void Create2(int B[],int n)
{	
	struct Node *last,*t;
	
	second=(struct Node*)malloc(sizeof(struct Node));
	second->data=B[0];
	second->next=NULL;
	last=second;
	
	int i;
	for(i=1;i<n;i++)
	  {
	  	t=(struct Node*)malloc(sizeof(struct Node));
	  	t->data=B[i];
	  	t->next=NULL;
	  	last->next=t;
	  	last=t;
	 }
}

void Display(struct Node *ptr)
 {
     while(ptr!=NULL)
     {
         printf("%d  ",ptr->data);
         ptr=ptr->next;
     }
 }
 
 void Concatenate(struct Node *ptr,struct Node *qtr)
 {
 	while(ptr->next!=NULL)
 	 {
 	 	ptr=ptr->next;
	 }
	  ptr->next=qtr;
	  ptr=first; 	
 }
 
 
 int main()
  {
      int A[]={1,3,2,4,5};
      int B[]={10,12,34,56,76};
      
      Create(A,5);
      Create2(B,5);
      
    printf("\n1st Linked list : ");
      Display(first);
      
      printf("\n2nd Linked list : ");
      Display(second);
      
      Concatenate(first,second);
      
      printf("\nConcatenated array : ");
      Display(first);
  }
