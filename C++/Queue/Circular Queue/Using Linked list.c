#include<stdio.h>
int size=3;
struct Node
  {
      int data;
      struct Node*next;
  }*front=NULL,*rear=NULL;

void Enqueue(int element)
     {
       struct Node*t=(struct Node*)malloc(sizeof(struct Node));
       t->data=element;
       t->next=NULL;
       if(front==NULL)
        {
            t->next=front;
            front=rear=t;
       }
       else
            {
                rear->next=t;
            }
        rear=t;
        rear->next=front;
     }

int Dequeue()
 {
     int x=-1;
     if(front==rear) { printf("Queue is empty"); }
     else
         {
           struct Node*t;
           t=front;
           front=front->next;
           rear->next=front;
           x=t->data;
           free(t);
         }
        return x;
 }

void Display(struct Node *ptr)
{
    printf("\nElements in Circular Queue are: ");
    while(ptr->next!=front)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("%d ",ptr->data);
}
int main()
{
    Enqueue(14);
    Enqueue(22);
    Enqueue(6);

    printf("\n");
    Display(front);

    printf("\n%d",Dequeue());
    printf("\n%d",Dequeue());


    printf("\n");
    Display(front);

    Enqueue(9);
    Enqueue(20);

    printf("\n");
    Display(front);

    }
