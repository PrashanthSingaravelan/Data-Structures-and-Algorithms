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
Node*Search(struct Node*ptr,int keys)
{
	while(ptr!=NULL)
	{
		if(keys==ptr->data)
		{
			return ptr;
		}
	ptr=ptr->next;		
	}	
}
int main()
{
    int A[]={45,78,63,89,21};
    Create(A,5);
    temp=Search(first,63);
    printf("The searched element %d",temp);
    return 0;
}
