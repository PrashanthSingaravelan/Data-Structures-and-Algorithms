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
