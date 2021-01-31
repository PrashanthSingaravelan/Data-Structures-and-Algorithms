#include<stdio.h>
#include <stdlib.h>

                               // CIRCULAR QUEUE
struct Queue
{
  int size;
  int front;
  int rear;
  struct Node **Q; // int *Q  Since it already a pointer
                   // struct Node* => For Storing pointer of type Node ,, *Q => array,
};
      void Create(struct Queue *q,int size)
        {
          q->size=size;
          q->front=q->rear=0;
          q->Q=(struct Node**)malloc(q->size*sizeof(struct Node *)); // Array of pointers, Should type cast this as node type of pointer
        }

      void enqueue(struct Queue *q,struct Node* x)
        {
           if((q->rear+1)%q->size==q->front)
           printf("Queue is Full");
          else
             {
              q->rear=(q->rear+1)%q->size;
              q->Q[q->rear]=x;
              }
        }

  struct Node* dequeue(struct Queue *q)
   {
    struct Node* x=NULL;
    if(q->front==q->rear)
    printf("Queue is Empty\n");
     else
        {
         q->front=(q->front+1)%q->size;
         x=q->Q[q->front];
        }
    return x;
   }

int isEmpty(struct Queue q)
  {
      return q.front==q.rear; // Returns 1 if it is TRUE
  }

// ###################################################################################3

struct Node
 {
     struct Node*lchild;
     int data;
     struct Node*rchild;
 };
 
struct Node *root=NULL;

void TreeCreate()
  {
      struct Node *p,*t;  // *t => For creating new node every time
                          // *p => For pointing the next address of the node in the queue
      int x;
      struct Queue q;
      Create(&q,50);  // Create a queue of size 50

      // For creating a root node
      printf("Enter the root value : ");
      scanf("%d",&x);
      root=(struct Node*)malloc(sizeof(struct Node));
      root->data=x;
      root->lchild=root->rchild=NULL;
      enqueue(&q,root);

      while(!isEmpty(q))
        {
          p=dequeue(&q);  // Take the address of the next node in the Queue

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

  void Preorder(struct Node *p)
   {
   	if(p)
   	 {
       printf("%d ",p->data);
       Preorder(p->lchild);   // Left child ends
       Preorder(p->rchild);
     }
   }
   
   void Inorder(struct Node*p)
    {
    	if(p)
    	{
    	Inorder(p->lchild);
		printf("%d ",p->data);
		Inorder(p->rchild);    
	    }
	}
	
	void Postorder(struct Node *p)
	{
		if(p)
		{
		Postorder(p->lchild);
		Postorder(p->rchild);
	    printf("%d ",p->data);		
	    }
	}

int main()
{
     TreeCreate(); // For creating a tree
     printf("The Preorder traversal : \n");
	 Preorder(root);  // Root,lchild,rchild
	 //printf("\nThe Inorder traversal : \n");
	 //Inorder(root);
	 //printf("\nThe Postorder traversal : \n");
	 //Postorder(root);
}

