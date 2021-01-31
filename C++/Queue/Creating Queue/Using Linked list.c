#include<stdio.h>
#include<stdlib.h>

struct Node
 {
     int data;
     struct Node *next;
 }*front=NULL,*rear=NULL;

 void Enqueue(int x)
   {
       struct Node*t=(struct Node*)malloc(sizeof(struct Node));
       t->data=x;
       t->next=NULL;
       if(front==NULL) {front=rear=t;}
       else
       {
          rear->next=t;
          rear=t;
       }
   }

int Dequeue()
  {
      int x=-1;
      struct Node*t;
      if(front==rear) { printf("Queue is empty"); }
      else
          {
            t=front;
            front=front->next;
            x=t->data;
            free(t);
          }
          return x;
  }



void Display(struct Node*ptr)
  {
      while(ptr!=NULL)
         {
           printf("%d  ",ptr->data);
           ptr=ptr->next;
         }
        printf("\n");
  }




int main()
  {
    Enqueue(4);
    Enqueue(3);
    Enqueue(6);
    Enqueue(8);
    Enqueue(1);

    printf("\n");
    Display(front);

    printf("\n%d",Dequeue());

    printf("\n");
    Display(front);
  }


