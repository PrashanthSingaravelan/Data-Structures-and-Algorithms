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

// Iterative version of linear search
struct Node* Linear_Search(struct Node*ptr,int keys)
{
    while(ptr!=NULL)
    {
        if(keys==ptr->data) return ptr;
        else ptr=ptr->next;
    }
}

// Recursive version of linear search
struct Node* Recursive_Search(struct Node*ptr,int keys)
{
    if (ptr==NULL) return NULL;
    else
    if(keys==ptr->data) return ptr;
    else
        return Recursive_Search(ptr->next,keys);
}
int main()
{
    int A[]={45,63,66,53,89,98,21};
    Create(A,7);
    struct Node *temp;
    temp=Recursive_Search(first,89);
    if(temp!=NULL)
        printf("Key is found %d",temp->data);
    else
        printf("Key is not found");
    return 0;
}
