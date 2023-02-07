#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#include "Queue.c"
#include "Stack.c"

struct Node
 {
     struct Node*lchild;
     int data;
     struct Node*rchild;
 };
 
struct Node *root=NULL;

						/*Creating a binary tree*/
void Create_tree()
  {
      struct Node *p,*t;  // *t => For creating new node every time
                          // *p => For pointing to the next address of the node in the queue
      int x;
      struct Queue q;
      Create_Queue(&q,50);  // Create a queue of size 50

      // For creating a root node
      printf("Enter the root value : ");
      scanf("%d",&x);
      root=(struct Node*)malloc(sizeof(struct Node));
      root->data=x;
      root->lchild=root->rchild=NULL;
      enqueue(&q,root);

      while(!isEmpty(q))
        {
          p=dequeue(&q);  // Take the address of the node in the Queue, and ask for left and right child 

          // For left child
          printf("Enter the left child of %d : ",p->data);
          scanf("%d",&x);
          if(x!=-1) // (i.e) If x=-1, then there is no node
             {
               t=(struct Node*)malloc(sizeof(struct Node));
               t->data=x;
               t->lchild=t->rchild=NULL;
               p->lchild=t;
               enqueue(&q,t);
             }

          // For right child
          printf("Enter the right child of %d : ",p->data);
          scanf("%d",&x);
          if(x!=-1) // (i.e) If x=-1, then there is no node
             {
               t=(struct Node*)malloc(sizeof(struct Node));
               t->data=x;
               t->lchild=t->rchild=NULL;
               p->rchild=t;
               enqueue(&q,t);
             }
        }
  }
/*############### End of binary tree creation #################*/


/*############## Iterative pre-order traversal #################*/
void Pre_order(struct Node *p)
{
	struct Stack stk;
	Stack_create(&stk,50);  // creating the stack

	while(p || (!isEmptyStack(stk)))
	{
		if(p)
		{
			printf("%d ",p->data);
			Push(&stk,p);
			p = p->lchild;
		}
		else 
		{
			p = Pop(&stk);
			p = p->rchild;
		}
	}
}
/*###################  End of Pre-order ##################*/

/*############## Iterative In-order traversal #################*/
void In_order(struct Node *p)
{
	struct Stack stk;
	Stack_create(&stk,50);  // creating the stack

	while(p || (!isEmptyStack(stk)))
	{
		if(p)
		{
			Push(&stk,p);
			p = p->lchild;
		}
		else 
		{
			p = Pop(&stk);
			printf("%d ",p->data);
			p = p->rchild;
		}
	}
}

/*###################  End of In-order ##################*/

int main()
{
	Create_tree(); // For creating a tree
    printf("Tree is created successfully");

    /* Execute one-by-one, Don't run all traversal at a stretch */
	printf("\nThe Preorder traversal : ");
	Pre_order(root);

	printf("\nThe In-order traversal : ");
	In_order(root);

	return 0;
}



