#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void Create(int A[],int n)
    {
        // To create first node which contains A[0]
     int i;
     struct Node *t,*last;
     first=(struct Node*)malloc(sizeof(struct Node));
     first->data=A[0];
     first->next=NULL;
     last=first;
                                //To create rest of the node and link it
     for(int i=1 ; i<n ; i++)   // i=1 Since A[0] is inserted already
       {
          t=(struct Node*)malloc(sizeof(struct Node));
          t->data=A[i];
          t->next=NULL;
          last->next=t;
          last=t;
       }
    }
struct Node * Move_to_head(struct Node *p,int keys)
{
  struct Node *q=NULL;
  while(p!=NULL)
  {
      if(keys==p->data)
      {
          q->next=p->next;
          p->next=first;
          first=p;
          return p;
      }
      printf("p=%d",p->data);
      printf("q=%d",q->data);
      q=p;

      p=p->next;
  }
}
void Display(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    int A[]={45,63,66,53,89,98,21};
    int a;
    Create(A,7);
    struct Node *temp;
    temp=Move_to_head(first,89);
    if(temp!=NULL)
        printf("Key is found %d\n",temp->data);
    else
        printf("Key is not found\n");
    Display(first);
    return 0;
}

