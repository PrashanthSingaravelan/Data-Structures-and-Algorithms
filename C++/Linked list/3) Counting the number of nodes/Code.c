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
// 1) Using recursion
int RCount(struct Node*cot)
{
    if (cot==0)
    {
        return 0;
    }
        return 1+ RCount(cot->next);
}

// 2) Using Recursion (with Variables)
int VRCount(struct Node *p)
{
    int x=0;
    if(p)
    {
        x=VRCount(p->next);
        return x+1;
    }
    else
    {
        return x;
    }
}

// 3) Using iteration
int Wcount(struct Node*cot)
{
    int count=0;
    while(cot!=0)
  {
    count++;
    cot=cot->next;
  }
 return count;
}

int main()

{ // To initialise the structure in the heap from the stack
int A[]={45,78,28,10,89};
Create(A,5);
printf("Using Recursion : %d\n",RCount(first));
printf("Using Recursion with variables : %d\n",VRCount(first));
printf("Using Iteration : %d\n",Wcount(first));
return 0;

}
