#include<stdio.h>
#include<stdlib.h>
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

void isDuplicate(struct Node*ptr)
  {
     struct Node*qtr=NULL;
     ptr=qtr->next;

    //printf("\n%d  ",ptr->data);
    //printf("Nope %d ",qtr->data);

     int x=-1;
     while(ptr!=NULL)
     {
        if(ptr->data!=qtr->data)
        {
            //printf("\nqtr : %d",qtr->data);
            //printf("\nptr : %d",ptr->data);
            qtr=ptr;
            ptr=ptr->next;
        }
        else
        {
            qtr->next=ptr->next;
            free(ptr);
            ptr=qtr->next;
        }
     }
  }

int main()
  {
      int A[5]={20,45,21,89,40};
      Create(A,5);

      isDuplicate(first);
      printf("\n");
      Display(first);
  }
