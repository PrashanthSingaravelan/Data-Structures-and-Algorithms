#include<stdio.h>
#include<stdlib.h>

struct Node
    {
        int data;
        struct Node *next;
    }*front=NULL,*rear=NULL;
    
    void enqueue(int x)
    {
        struct Node *t;
        t=(struct Node*)malloc(sizeof(struct Node));
        if(t==NULL)
        printf("Queue is FUll\n");
        
        else  {
        t->data=x;
        t->next=NULL;
        if(front==NULL)
        front=rear=t;
        
        else  {
        rear->next=t;
        rear=t;
        }
    }
}

int dequeue()
{
    int x=-1;
    struct Node* t;
    if(front==NULL)
    printf("Queue is Empty\n");
    else {
    x=front->data;
    t=front;
    front=front->next;
    free(t);
    }
    return x;
}

int isEmpty() {
    return front==NULL;
}

void BFS(int A[][7],int start,int n) 
{
	int u = start;  // for horizontal(row) travesing
	int v;			// for vertical(column) travesing

	int visited[7] = {0};  /*Initially all visited are 0*/

	printf("%d ",u);
	visited[u] = 1;
	enqueue(u);

	while(!isEmpty()) {
		u = dequeue();  /*After Dequeue,start exploring all the vertices*/
		for (v=1;v<n;v++) {
			/* if a vertex is there and not yet visited */
			if (A[u][v]==1 && visited[v]!=1) {
				printf("%d ",v);
				visited[v] = 1;
				enqueue(v);
			}
		}
	}
}

int main()
{
int A[7][7]={
		{0,0,0,0,0,0,0},
		{0,0,1,1,0,0,0},
		{0,1,0,0,1,0,0},
		{0,1,0,0,1,0,0},
		{0,0,1,1,0,1,1},
		{0,0,0,0,1,0,0},
		{0,0,0,0,1,0,0}
	};

BFS(A,1,7);   // starting vertex --> 1

printf("\n");
BFS(A,4,7);   // starting vertex --> 4

printf("\n");
BFS(A,5,7);   // starting vertex --> 5

printf("\n");
BFS(A,3,7);   // starting vertex --> 3



return 0;
}