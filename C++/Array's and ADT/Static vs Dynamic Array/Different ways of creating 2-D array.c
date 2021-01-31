#include<stdio.h>
#include<stdlib.h>
int main()
{
    // Through out the program it is 3*4 matrix

    int i,j;
    // 1) Array inside the stack memory
    int A[3][4]={ {1,2,3,4},{8,4,3,2},{9,0,0,3} };

    // 2) Array inside the heap memory but Pointer inside the stack memory

    int *B[3]; // Array of pointers inside the stack

    B[0]=(int*)malloc(4*sizeof(int));
    B[1]=(int*)malloc(4*sizeof(int));
    B[2]=(int*)malloc(4*sizeof(int));

    // 3) Array and the pointer inside the heap memory

    int **C; // Normal pointer inside the stack

    C=(int**)malloc(3*sizeof(int *));

    C[0]=(int*)malloc(4*sizeof(int));
    C[1]=(int*)malloc(4*sizeof(int));
    C[2]=(int*)malloc(4*sizeof(int));



    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}



