#include<stdio.h>
#include<stdlib.h>
#include "Queue.c"

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

printf("BFS with Starting vertex (1) : ");
BFS(A,1,7);   // starting vertex --> 1

printf("\n");
printf("BFS with Starting vertex (4) : ");
BFS(A,4,7);   // starting vertex --> 4

printf("\n");
printf("BFS with Starting vertex (5) : ");
BFS(A,5,7);   // starting vertex --> 5

printf("\n");
printf("BFS with Starting vertex (3) : ");
BFS(A,3,7);   // starting vertex --> 3

return 0;
}