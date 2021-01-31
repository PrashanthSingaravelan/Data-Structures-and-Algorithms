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
         printf("%d ",p->data);
         p=p->next;
       }
    }

int Count(struct Node*ptr)
{
    int count;
    while(ptr!=NULL)
    {
        count=count+1;
        ptr=ptr->next;
    }
    return count;
}

int Delete(struct Node *ptr,int index)
{
    struct Node*qtr=NULL;
    int x=-1;
    if( index<1 || index>Count(ptr) ) {return -1;}
    else
    {
        if(index==1)
          {
             qtr=first;
             first=first->next;
             x=qtr->data;
             free(qtr);
             return x;
          }
                else
                  {
                    int i;
                    for(i=0;i<index-1;i++)
                     {
                       qtr=ptr;
                       ptr=ptr->next;
                     }
                        qtr->next=ptr->next;
                        x=ptr->data;
                        free(ptr);
                        return x;
                    }
     }
}

int main()
{                // To initialise the structure in the heap from the stack
int A[]={45,78,28,10,89};
Create(A,5);
printf("Before Deleting \n");
Display(first);
printf("\nDeleted element : %d",Delete(first,3));
printf("\nAfter Deleting \n");
Display(first);
}
