#include<stdio.h>
#include<stdlib.h>



void BFS(int G[][7],int start,int n) // Start->Starting vertex, n->Dimension of the matrix
   {
       int i=start,j=0;
       int visited[7]={0}; // Since at the beginning, none of the vertices are visited
       // Queue using Linked list is also activated

       // For the first vertex
       printf("%d ",i);  // Visiting the starting vertex
       visited[i]=1;     // Mark 1 to show that this vertex is already visited
       Enqueue(i);

       // Take the remaining vertex and explore it

       while(!isEmpty()) // Loop will execute until the queue is full, if queue is full then all the elements are traversed
           {
               i=Dequeue(); // Each time Take out a vertex from the queue and start exploring it
                for(j=1;j<n;j++)
                     {
                         if(G[i][j]==1 && visited[j]==0) //If there is an edge and not yet visited, Since we don't want to visit the vertices which are already visited
                           {
                               printf("%d ",j);
                               visited[j]=1;
                               Enqueue(j);
                           }
                     }
           }
   }



int main()
{
    // 2-Dimensional Array
    int G[7][7] ={  {0,0,0,0,0,0,0} ,
                    {0,0,1,1,0,0,0} ,
                    {0,1,0,0,1,0,0} ,
                    {0,1,0,0,1,0,0} ,
                    {0,0,1,1,0,1,1} ,
                    {0,0,0,0,1,0,0} ,
                    {0,0,0,0,1,0,0} ,  };
    BFS(G,1,7);
    return 0;
}
