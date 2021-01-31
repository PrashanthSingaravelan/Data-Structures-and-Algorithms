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

void Display(struct Node *p)
   {
     while(p!=NULL)
       {
         printf("%d -> ",p->data);
         p=p->next;
       }
    }

int main()
{ // To initialise the structure in the heap from the stack
int A[]={45,78,28,10,89};
Create(A,5);
Display(first);
return 0;
}

