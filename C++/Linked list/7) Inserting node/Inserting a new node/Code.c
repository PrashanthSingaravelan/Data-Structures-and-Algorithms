# include<stdio.h>
# include<stdlib.h>
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
         
	 int i;                       //To create rest of the node and link it
     for(i=1 ; i<n ; i++)   // i=1 Since A[0] is inserted already
       {
          t=(struct Node*)malloc(sizeof(struct Node));
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
int count(struct Node*ptr)
{
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}

void Insert(struct Node*ptr,int index,int element)
{
    int i;
    // Check the validity of the index
    if(index < 0 || index > count(ptr) ){return ;}

    // Creating and filling the data in the new node
    struct Node*t=(struct Node*)malloc(sizeof(struct Node));
    t->data=element;

    // To link this t node in an appropriate position

    // Inserting as a first node
    if(index==0)
    {
        t->next=first; // Link the new node to the first
        first=t;       // Then point point first to the new node t
    }
    else // Should insert in some other position
        // For that the pointer ptr should come from first
    {
       for(i=0;i<index-1 && ptr;i++)
       {
           ptr=ptr->next;
       }
       t->next=ptr->next;
       ptr->next=t;
    }
}
int main()
{
int A[]={45,78,28,10,32};
Create(A,5);
Insert(first,4,90); // Inserting as a first node
//Insert(first,6,21); // Inserting as a last node
//Insert(first,100,32); // An invalid index so that the link list should remain unchanged
//Display(first);

return 0;
}
