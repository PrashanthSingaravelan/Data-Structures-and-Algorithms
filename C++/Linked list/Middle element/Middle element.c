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

int Middle1(struct Node*head)
{
    struct Node*slow=head;
    struct Node*fast=head;
    if(head!=NULL)
        while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}

int Middle2(struct Node *ptr)
{
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    if(count%2==0)
      count=(count/2)+1;
    else
      count=(count+1)/2;
  return count;
}
int Middle3(int a,struct Node *ptr)
{
    int x=0;
    while(x!=a)
    {
        x++;
        ptr=ptr->next;
    }
    return ptr->data;
}
int main()
{
    int A[]={45,63,66,53,89,98,21};
    int a;
    Create(A,7);
    printf("1) The Middle element in the linked list : %d\n",Middle1(first));
    a=Middle2(first);
    printf("2) The Middle element in the linked list : %d",Middle3(a-1,first));
    return 0;
}
