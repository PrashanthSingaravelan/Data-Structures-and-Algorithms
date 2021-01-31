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
int isSorted(struct Node*ptr)
  {
    int x=-32768;
    while(ptr!=NULL)
    {
      if(ptr->data>x)
         {
           x=ptr->data;
           ptr=ptr->next;
         }
      else
        {
            printf("\nIt is not sorted");
            return ptr->data;
            break;
        }
    }
  }



int main()
  {
      int A[5]={1,3,2,4,5};
      Create(A,5);
      Display(first);
      printf("\n%d",isSorted(first));
  }

