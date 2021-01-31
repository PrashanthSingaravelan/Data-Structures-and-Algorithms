#include<stdio.h>

struct Queue
{
    int size;
    int front;
    int rear;
    int *s;
};

void Create(struct Queue *ptr,int size)
  {
      ptr->size=size;
      ptr->front=ptr->rear=0; // Very Important line
      ptr->s=(int*)malloc(sizeof(ptr->size*sizeof(int)));
  }

void Enqueue(struct Queue *ptr,int element)
  {
      if(((ptr->rear+1)%ptr->size)==ptr->front) { printf("Queue is full ");}
      else
       {
           ptr->rear=(ptr->rear+1)%ptr->size;
           ptr->s[ptr->rear]=element;
       }
  }

int Dequeue(struct Queue *ptr)
    {
     int x=-1;
     if(ptr->front==ptr->rear) {printf("Queue is empty");}
     else
       {
        ptr->front=(ptr->front+1)%ptr->size;
        x=ptr->s[ptr->front];
       }
    return x;
    }

void Display(struct Queue ptr)
  {
      int i=ptr.front+1;
      do
      {
        printf("%d ",ptr.s[i]);
        i=(i+1)%ptr.size;
      }while(i!=(ptr.rear+1)%ptr.size);
   printf("\n");
  }

int main()
{
    struct Queue obj;
    Create(&obj,5);   // Among 5 definitely one index will be empty, So only Not allowing the 5th element to enter

    Enqueue(&obj,9);
    Enqueue(&obj,0);
    Enqueue(&obj,0);
    Enqueue(&obj,3);

    Display(obj);

    printf("\nThe Dequeued element : %d",Dequeue(&obj));
    printf("\nThe Dequeued element : %d",Dequeue(&obj));

    printf("\n");

    Enqueue(&obj,7);
    Enqueue(&obj,2);

    Display(obj);


}
