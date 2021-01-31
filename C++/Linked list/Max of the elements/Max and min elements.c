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
     struct Node *t,*last;
     first=(struct Node*)malloc(sizeof(struct Node));
     first->data=A[0];
     first->next=NULL;
     last=first;
                                //To create rest of the node and link it
     for(int i=1;i<n;i++)   // i=1 Since A[0] is inserted already
       {
          t=(struct Node*)malloc(sizeof(struct Node));
          t->data=A[i];
          t->next=NULL;
          last->next=t;
          last=t;
       }
    }
    
int max_min(struct Node *ptr)
{
	int min=32768;
	int max=-32768;
	while(ptr!=NULL)
	{
		if(min>ptr->data)
		  {
			min=ptr->data;
		  }
		if(max<ptr->data)
		  {
			max=ptr->data;
		  }
	ptr=ptr->next;		
	}
	printf("The Maximum element is : %d\n",max);
	printf("The Minimum element is : %d",min);
}

int main()
{
    int A[]={45,78,63,89,21};
    Create(A,5);
    max_min(first);
    return 0;
}
