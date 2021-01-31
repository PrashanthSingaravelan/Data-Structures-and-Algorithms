#include<stdio.h>
#include<stdlib.h>

struct Queue
  {
      int size;
      int front;
      int rear;
      int *S;  // Dynamically created array
  };

void Create(struct Queue*ptr,int size)
  {
      ptr->size=size;
      ptr->front=ptr->rear=-1;
      ptr->S=(int*)malloc(ptr->size * sizeof(int));
  }

void Enqueue(struct Queue *ptr,int element)
   {
      if(ptr->rear==ptr->size-1) {printf("Queue is full");}
      else
        {
            ptr->rear++;
            ptr->S[ptr->rear]=element;
        }
   }

int Dequeue(struct Queue*ptr)
     {
        int x=-1;
        if(ptr->front==ptr->rear) {printf("The Queue is empty Dequeue is not possible ");}
        else
            {
               ptr->front++;
               x=ptr->S[ptr->front];
            }
            return x;
     }

void Display(struct Queue obj)
  {
      int i;
      for(i=obj.front+1;i<=obj.rear;i++)
      {
          printf("%d  ",obj.S[i]);
      }
      printf("\n");
  }

int main()
  {
      struct Queue obj;
      Create(&obj,5);
      printf("Before Dequeue\n");
      Enqueue(&obj,7);
      Enqueue(&obj,2);
      Enqueue(&obj,4);

      Display(obj);
      Dequeue(&obj);

      printf("\nAfter Dequeue\n");
      Display(obj);
  }
