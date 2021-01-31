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
int RSum(struct Node *ptr)
{
    if (ptr) // if(ptr!=NULL)
    {
        return RSum(ptr->next) + ptr->data;
    }
    else
    {
        return 0;
    }
}

int Sum(struct Node *ptr)
{
    int sum=0;
    while(ptr)  // while(ptr!=NULL)
    {
        sum=sum+ptr->data;
        ptr=ptr->next;
    }
    return sum;
}

// To initialise the structure in the heap from the stack
int main()
{
int A[]={45,78,28,10,89};
Create(A,5);

printf("Sum using Using Recursion : %d\n",RSum(first));
printf("Sum using iterative : %d\n",Sum(first));

return 0;

}
