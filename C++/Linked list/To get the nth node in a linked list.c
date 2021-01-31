#include<stdio.h>

struct Node
 {
 	int data;
 	struct Node*next; 	
 }*first=NULL;
 
 void Create(int A[],int size)
  {
  	struct Node *t,*last;
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
  	printf("%d ",ptr->data);
  	ptr=ptr->next;
    }  	
  }
  
  int TogetThenthNode(struct Node *ptr)
  {
  	int count=0;
  	int index;
  	printf("\nEnter the index position : ");
  	scanf("%d",&index);
  	
  	while(count!=index)
  	 {
  	 	ptr=ptr->next;
  	 	count=count+1;
	}
  printf("\nThe element at index %d ",index);
  return ptr->data;  	
  }
  
int main()
 {
 	int A[5]={9,0,0,3,0};
 	Create(A,5);
 	
 	Display(first);
 	
 	printf("is %d ",TogetThenthNode(first));
 }
  
