#include<stdio.h>

struct Node
{
    int data;
    struct Node*next;
}*first=NULL;

void Create(int A[],int size)
  {
      struct Node*t,*last;
      first=(struct Node*)malloc(sizeof(struct Node));
      first->data=A[0];
      first->next=NULL;
      last=first;
  int i;
  for(i=1;i<size;i++)
      {
        struct Node*t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
      }
  }

void Display(struct Node*ptr)
  {
      while(ptr!=NULL)
         {
           printf("%d  ",ptr->data);
           ptr=ptr->next;
         }
  }
  
  int isSorted(struct Node *ptr)
  {
  	struct Node *qtr=first;
	ptr=ptr->next;
  	
  	while(ptr!=NULL)
  	{
  		if(ptr->data < qtr->data) { return 0;}
		else 
		{ qtr=ptr; ptr=ptr->next; }
	}
	return 1;
  }
  
  int main()
  {
      int A[5]={1,2,3,4,5};
      Create(A,5);
      //Display(first);
      printf("\n%d",isSorted(first));
  }
