                          // CIRCULAR QUEUE
struct Queue
{
  int size;
  int front;
  int rear;
  struct Node **Q; // int *Q  Since it already a pointer
                   // struct Node* => For Storing pointer of type Node , *Q => array,
};
    
void Create_Queue(struct Queue *q,int size)
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
		     {
		     	printf("Queue is Empty\n");
		     }
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

/*##########################End of queue #######################*/