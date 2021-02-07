#include<stdio.h>
#include <stdlib.h>
#include "Queue.c"		                    		                  
  		                  // Binary Tree

struct Node
 {
     struct Node*lchild;
     int data;
     struct Node*rchild;
 };
 
struct Node *root=NULL;

void Create_tree()
  {
      struct Node *p,*t;  // *t => For creating new node every time
                          // *p => For pointing to the next address of the node in the queue
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

int main()
{
     Create_tree(); // For creating a tree
     printf("Tree is created successfully");
	 return 0;
}

