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
        // For that the pointer p should come from first
    {
       for(i=0;i<index-1;i++)
       {
           ptr=ptr->next;
       }
       t->next=ptr->next;
       ptr->next=t;
    }
}


int main()
{        // Without creating a linked list we can simply add each and every element
         // But the index's should be consecutive numbers, should not be random numbers
Insert(first,0,90);
Insert(first,1,45);
Insert(first,2,53);

Display(first);

return 0;
}
