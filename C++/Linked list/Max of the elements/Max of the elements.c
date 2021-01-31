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
int Normal_Max(struct Node *ptr)
{
    int m=-32768;
    while(ptr!=NULL)
    {
        if(ptr->data>m)
        {
            m=ptr->data;
        }
        ptr=ptr->next;
    }
    return m;
}

int Recursive_Max(struct Node*ptr)
{
    int x;
    int min=-32768;
    if (ptr==0)
    {
        return min;
    }
    else
        {
          x=Recursive_Max(ptr->next);
          if(ptr->data<x) return x;     // return (x>ptr->data)? x:ptr->data
          else return ptr->data;
        }
}


int main()
{
    int A[]={45,78,63,89,21};
    Create(A,5);
    printf("The maximum element in the linked list : %d\n",Normal_Max(first));
    printf("The maximum element in the linked list : %d",Recursive_Max(first));
    return 0;

}
