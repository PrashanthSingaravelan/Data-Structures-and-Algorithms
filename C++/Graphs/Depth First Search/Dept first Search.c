#include<stdio.h>
#include<conio.h>

void DFS(int G[][7],int u,int n)
{
	static int visited[7] = {0};
	
	if(visited[u]==0) {
		printf("%d ",u);
		visited[u] = 1;

		for(int v=1;v<n;v++) {
		/* if a vertex is there and not yet visited */
			if (G[u][v]==1 && visited[v]==0) {
				DFS(G,v,n);
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
	DFS(A,1,7);
}